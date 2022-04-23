#include "ArrayList.h"
#include <iostream>

using namespace std;

void ArrayList::expand(int count)
{
	int* newdata = new int[count + this->capacity];
	for (int i = 0; i < this->capacity; ++i)
	{
		newdata[i] = this->data[i];
	}
	delete[] this->data;
	this->data = newdata;
	this->capacity += count;
}

void ArrayList::swap(int posi, int posj)
{
	int a = this->data[posi];
	this->data[posi] = this->data[posj];
	this->data[posj] = a;
}

int ArrayList::ind(int index)
{
	if (index < 0)
	{
		pushbegin(0);
		return 0;
	}
	if (index >= this->count)
	{
		pushend(0);
		return this->count - 1;
	}
	return index;
}

ArrayList::ArrayList(int capacity)
{
	this->capacity = capacity;
	this->count = 0;
	this->data = new int[capacity];
	this->maximum = 0;
	this->minimum = 0;
	this->k_max = 0;
	this->k_min = -1;

}

ArrayList::ArrayList(const ArrayList& list)
{
	this->capacity = list.count;
	this->count = list.count;
	this->data = new int[list.count];
	this->maximum = list.maximum;
	this->minimum = list.minimum;
	this->k_max = list.k_max;
	this->k_min = list.k_min;

	for (int i = 0; i < list.count; ++i)
	{
		this->data[i] = list.data[i];
	}
}

ArrayList::~ArrayList()
{
	this->count = 0;
	this->capacity = 0;
	for (int i = 0; i < this->count; ++i)
	{
		this->data[i] = 0;
	}
	this->maximum = 0;
	this->minimum = 0;
	this->k_max = 0;
	this->k_min = 0;

}

void ArrayList::pushend(int element)
{
	if (element > this->maximum)
	{
		this->maximum = element;
		this->k_max = 1;
	}
	else if (element == this->maximum)
	{
		this->maximum = element;
		this->k_max++;
	}


	if (element < this->minimum)
	{
		this->minimum = element;
		this->k_min = 1;
	}
	else if (element == this->minimum)
	{
		this->minimum = element;
		this->k_min++;
	}
	else if (this->k_min < 0)
	{
		this->minimum = element;
		this->k_min = 1;
	}

	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->data[this->count] = element;
	this->count++;
}

void ArrayList::pushbegin(int element)
{
	if (element > this->maximum)
	{
		this->maximum = element;
		this->k_max = 1;
	}
	else if (element == this->maximum)
	{
		this->maximum = element;
		this->k_max++;
	}

	if (element < this->minimum)
	{
		this->minimum = element;
		this->k_min = 1;
	}
	else if (element == this->minimum)
	{
		this->minimum = element;
		this->k_min++;
	}
	else if (this->k_min < 0)
	{
		this->minimum = element;
		this->k_min = 1;
	}

	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	int* newdata = new int[this->capacity];
	for (int i = 0; i < this->count; ++i)
	{
		newdata[i + 1] = this->data[i];
	}
	newdata[0] = element;
	delete[] this->data;
	this->data = newdata;
	this->count++;
}

void ArrayList::insert(int element, int position)
{


	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	if (position >= count)
	{
		pushend(element);
	}
	else if (position <= 0)
	{
		pushbegin(element);
	}
	else
	{
		if (element >= this->maximum)
		{
			if (element == this->maximum)
			{
				this->k_max++;
			}
			else if (element > this->maximum)
			{
				this->maximum = element;
				this->k_max = 1;
			}
		}
		if (element < this->minimum)
		{
			this->minimum = element;
			this->k_min = 1;
		}
		else if (element == this->minimum)
		{
			this->minimum = element;
			this->k_min++;
		}
		else if (this->k_min < 0)
		{
			this->minimum = element;
			this->k_min = 1;
		}


		int* newdata = new int[this->capacity];
		for (int i = 0; i < this->count + 1; ++i)
		{
			if (i < position)
			{
				newdata[i] = this->data[i];
			}
			else if (i == position)
			{
				newdata[i] = element;
			}
			else if (i > position)
			{
				newdata[i] = this->data[i - 1];
			}
		}
		delete[] this->data;
		this->data = newdata;
		this->count++;
	}
}

void ArrayList::extractbegin()
{


	if (this->count > 0)
	{
		int b = this->data[0];
		int* newdata = new int[this->capacity];
		for (int i = 0; i < this->count - 1; ++i)
		{
			newdata[i] = this->data[i + 1];
		}
		delete[] this->data;
		this->data = newdata;
		this->count--;

		if (b == this->maximum)
		{
			if (k_max > 1)
			{
				--k_max;
			}
			else
			{
				int max = this->minimum;
				for (int i = 0; i < this->count; ++i)
				{
					if (this->data[i] > max)
					{
						max = this->data[i];
						this->k_max = 1;
					}
					else if (this->data[i] == max)
					{
						++this->k_max;
					}
				}
				this->maximum = max;

			}
		}
		if (b == this->minimum)
		{
			if (k_min > 1)
			{
				--k_min;
			}
			else
			{
				int min = this->maximum;
				for (int i = 0; i < this->count; ++i)
				{
					if (this->data[i] < min)
					{
						min = this->data[i];
						this->k_min = 1;
					}
					else if (this->data[i] == min)
					{
						++this->k_min;
					}
				}
				this->minimum = min;

			}
		}

		cout << b;
	}
	else
	{
		cout << "Unable action";
	}
}

int ArrayList::extractend()
{

	this->count--;
	int b = this->data[this->count];
	if (b == this->maximum)
	{
		if (k_max > 1)
		{
			--k_max;
		}
		else
		{
			int max = this->minimum;
			for (int i = 0; i < this->count; ++i)
			{
				if (this->data[i] > max)
				{
					max = this->data[i];
					this->k_max = 1;
				}
				else if (this->data[i] == max)
				{
					++this->k_max;
				}
			}
			this->maximum = max;

		}
	}
	if (b == this->minimum)
	{
		if (k_min > 1)
		{
			--k_min;
		}
		else
		{
			int min = this->maximum;
			for (int i = 0; i < this->count; ++i)
			{
				if (this->data[i] < min)
				{
					min = this->data[i];
					this->k_min = 1;
				}
				else if (this->data[i] == min)
				{
					++this->k_min;
				}
			}
			this->minimum = min;

		}
	}

	return this->data[this->count];
}

void ArrayList::extract(int position)
{
	int element = this->data[position];


	if (this->count > 0)
	{
		if (position >= count)
		{
			extractend();
		}
		else if (position <= 0)
		{
			extractbegin();
		}
		else
		{
			int b = this->data[position];

			int* newdata = new int[this->capacity];
			for (int i = 0; i < this->count - 1; ++i)
			{
				if (i < position)
				{
					newdata[i] = this->data[i];
				}
				else if (i >= position)
				{
					newdata[i] = this->data[i + 1];
				}

			}
			delete[] this->data;
			this->data = newdata;
			this->count--;

			if (b == this->maximum)
			{
				if (k_max > 1)
				{
					--k_max;
				}
				else
				{
					int max = this->minimum;
					for (int i = 0; i < this->count; ++i)
					{
						if (this->data[i] > max)
						{
							max = this->data[i];
							this->k_max = 1;
						}
						else if (this->data[i] == max)
						{
							++this->k_max;
						}
					}
					this->maximum = max;

				}
			}
			if (b == this->minimum)
				cout << b;
		}
	}
	else
	{
		cout << "Unable action";
	}
}

void ArrayList::sort()
{
	int max = this->maximum;
	int min = this->minimum;

	int* newdata = new int[max - min + 1];
	for (int i = 0; i < max - min + 1; ++i)
	{
		newdata[i] = 0;
	}
	for (int i = 0; i < this->count; ++i)
	{
		newdata[this->data[i] - min]++;
	}

	int* sorted_mas = new int[this->capacity];
	int m = 0;
	for (int i = 0; i < max - min + 1; ++i)
	{
		int k = newdata[i];

		while (k > 0)
		{
			sorted_mas[m] = min + i;
			--k;
			++m;
		}
	}
	delete[] this->data;
	delete[] newdata;
	this->data = sorted_mas;
}

void ArrayList::quick_sort(int start, int end)
{
	if (end == -1)
	{
		end = this->count - 1;
	}

	int left = start;
	int right = end;
	int pivot = this->data[(left + right) / 2];

	while (left <= right)
	{

		while (this->data[left] < pivot)
		{
			++left;
		}
		while (this->data[right] > pivot)
		{
			--right;
		}
		if (left <= right)
		{
			swap(left, right);
			++left;
			--right;
		}

	}
	
	if (right > start)
	{
		quick_sort(start, right);
	}
	if (left < end)
	{
		quick_sort(left, end);
	}
}

int& ArrayList::operator[](int pos)
{
	return data[ind(pos)];
}

std::ostream& operator<<(std::ostream& stream, ArrayList& list)
{
	stream << "[" << list.count << "/" << list.capacity << "] {";
	if (list.count == 0)
	{
		stream << "EMPTY }";
	}
	else {
		for (int i = 0; i < list.count - 1; ++i)
		{
			stream << list.data[i] << ", ";
		}
		stream << list.data[list.count - 1] << "}" << endl;
	}
	stream << "maximim: " << list.maximum << "(" << list.k_max << ")" << endl;
	stream << "minimum: " << list.minimum << "(" << list.k_min << ")" << endl;
	return stream;
}
