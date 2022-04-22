#pragma once
#include <iostream>

class ArrayList
{
private:
	int* data;
	int capacity;
	int count;
	int maximum;
	int minimum;
	int k_max;
	int k_min;

	void expand(int count = 1);
	void swap(int posi, int posj);
	int ind(int index);

public:
	ArrayList(int capacity = 10);
	ArrayList(const ArrayList& list);
	~ArrayList();



	void pushend(int element);
	void pushbegin(int element);
	void insert(int element, int position);

	void extractbegin();
	int extractend();

	void extract(int position);

	void sort();

	int& operator[](int pos);

	friend std::ostream& operator<<(std::ostream& stream, ArrayList& list);

};