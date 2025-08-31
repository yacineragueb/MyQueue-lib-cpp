#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main()
{
	clsMyQueue <int> MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	cout << "\nQueue:";
	MyQueue.Print();

	cout << "\nQueue Size: " << MyQueue.Size();
	cout << "\nQueue Front: " << MyQueue.front();
	cout << "\nQueue Back: " << MyQueue.back();

	MyQueue.pop();

	cout << "\n\nQueue after pop():";
	MyQueue.Print();

	cout << "\n\nItem(2): " << MyQueue.GetItem(2);

	MyQueue.Reverse();
	cout << "\n\nQueue after reverse: ";
	MyQueue.Print();

	MyQueue.UpdateItem(2, 600);
	cout << "\n\nQueue after updating Item(2) to 600:";
	MyQueue.Print();

	MyQueue.InsertAfter(2, 800);
	cout << "\n\nQueue after Inserting 800 after Item(2):";
	MyQueue.Print();

	MyQueue.InsertAtFront(1000);
	cout << "\n\nQueue after Inserting 1000 at front:";
	MyQueue.Print();

	MyQueue.InsertAtBack(2000);
	cout << "\n\nQueue after Inserting 2000 at back:";
	MyQueue.Print();

	MyQueue.Clear();
	cout << "\n\nQueue after clear:";
	MyQueue.Print();
	return 0;
}