#include<iostream>
#include"LinkedList.h"

using namespace std;

int main(int argc, char* argv[])
{
	LinkedList list;
	list.pushHead(1);
	list.pushHead(2);
	list.pushHead(3);
	list.pushHead(4);
	list.pushHead(5);
	cout << list << endl;
	list.insert(7, 1);
	cout << list << endl;
	list.insert(7, 10);
	cout << list << endl;
	list.insert(8, 1);
	cout << list << endl;
	cout << list.extract(3) << endl;
	cout << list << endl;
	list.swap1(2, 4);
	cout << list << endl;
	list.swap1(3, 6);
	cout << list << endl;
	//list.swap1(-2, 5);
	//cout << list << endl;
	list.pushHead(0);
	list.pushTail(1);
	list.pushTail(2);
	list.pushHead(-1);
	list.pushHead(-2);
	cout << list << endl;
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << list << endl;
	cout << list.extract(3) << endl;
	cout << list << endl;
	cout << list.extract(5) << endl;
	cout << list << endl;
	cout << list.extract(2) << endl;
	cout << list << endl;
	
	return EXIT_SUCCESS;
}