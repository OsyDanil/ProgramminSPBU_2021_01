#include "LinkedList.h"

std::ostream& operator<<(std::ostream& stream, const Node& node)
{
	stream << node.data;
	return stream;
}
std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	stream << "[" << list.count << "] : { ";
	Node* temp = list.head;
	while (temp != nullptr)
	{
		stream << *temp << " ";
		//stream << temp->data << " ";
		temp = temp->next;
	}
	stream << "}";
	return stream;
}

Node*& LinkedList::nodeByIndex(int index)
{
	if (index < count)
	{
		Node* temp = head;
		for (int i = 0; i < index; ++i)
		{
			temp = temp->next;
		}
		return temp;
	}
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		popHead();
	}
}

void LinkedList::pushHead(int element)
{
	head = new Node(element, head);
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;
}

void LinkedList::pushTail(int element)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}
	tail->next = new Node(element);
	tail = tail->next;
	++count;
}

void LinkedList::insert(int element, int index)
{
	if (index == 0)
	{
		return pushHead(element);

	}
	if (index >= count)
	{
		return pushTail(element);
	}
	Node* temp1 = head;
	;
	for (int i = 0; i < index; ++i)
	{
		temp1 = temp1->next;
	}
	temp1 = new Node(element, temp1);
	++count;
	Node*& adres = nodeByIndex(index - 1);
	adres->next = temp1;
	
}

int LinkedList::extract(int index)
{
	if (index == 0)
	{
		return popHead();

	}
	if (index >= count)
	{
		return popTail();
	}
	Node* temp1 = head;
	int value = 0;
	for (int i = 0; i <= index; ++i)
	{
		if (i == index)
		{
			value = temp1->data;
		}
		temp1 = temp1->next;
	}
	--count;
	
	Node*& adres = nodeByIndex(index - 1);
	adres->next = temp1;
	return value;
}

void LinkedList::swap(int index1, int index2)
{
	Node* adres1 = nodeByIndex(index1);
	Node* adres2 = nodeByIndex(index2);
	int t = adres1->data;
	adres1->data = adres2->data;
	adres2->data = t;
}

void LinkedList::swap1(int index1, int index2)
{
	if (count < 2)
	{
		return;
	}
	if (index1 > index2)
	{
		int t = index1;
		index1 = index2;
		index2 = t;
	}
	else if (index1 == index2)
	{
		return;
	}
	if (index1 < 0)
	{
		index1 = 0;
	}
	if (index2 > count - 1)
	{
		index2 = count - 1;
	}
	if ((index1 == count - 1) || (index2 == count - 1))
	{

		if ((index1 == 0) || (index2 == 0))
		{
			
			
			Node* prev2 = nodeByIndex(index2 - 1);
			Node* v2 = prev2->next;
			Node* v1 = nodeByIndex(0);
			
			prev2->next->next = v1->next;
			head = prev2->next;

			prev2->next = v1;
			v1->next = nullptr;

			tail = v1;
		}
		else
		{
			Node* prev1 = nodeByIndex(index1 - 1);
			Node* prev2 = nodeByIndex(index2 - 1);
			Node* v2 = prev2->next;
			
			tail = prev1->next;
			prev2->next->next = prev1->next->next;
			prev2->next = prev1->next;
			prev1->next->next = nullptr;
			prev1->next = v2;
			
			
		}
	}
	else
	{
		if ((index1 == 0) || (index2 == 0))
		{
			Node* v1 = nodeByIndex(0);
			Node* prev2 = nodeByIndex(index2 - 1);
			Node* v2 = nodeByIndex(index2);
			Node* prev22 = prev2->next->next;
			v2->next = v1->next;
			v1->next = prev22;
			head = v2;
			prev2->next = v1;
			

			
		}
		else
		{
			Node* prev1 = nodeByIndex(index1 - 1);
			Node* v1 = nodeByIndex(index1);
			
			Node* prev2 = nodeByIndex(index2 - 1);
			Node* v2 = nodeByIndex(index2);
			Node* prev22 = prev2->next->next;

			prev2->next = v1;
			prev1->next = v2;
			v2->next = v1->next;
			v1->next = prev22;

		}

	}


	
}

int LinkedList::popHead()
{
	if (head == nullptr)
	{
		return 0;
	}
	--count;
	Node* temp = head;
	int value = head->data;
	head = head->next;
	delete temp;
	if (head == nullptr)
	{
		tail = nullptr;
	}
	return value;
}

int LinkedList::popTail()
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (head == tail)
	{
		return popHead();
	}
	Node* temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	--count;
	int value = tail->data;
	delete tail;
	tail = temp;
	tail->next = nullptr;
	return value;
}



