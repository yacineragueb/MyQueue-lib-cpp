#pragma once
#include <iostream>
#include "clsDblLinkedList.h" // You can get this lib from https://github.com/yacineragueb/LinkedList-lib-cpp

template <typename T>
class clsMyQueue
{
protected:
	clsDblLinkedList<T> _MyDblLinkedList;
public:
	void push(T value) {
		_MyDblLinkedList.InsertAtEnd(value);
	}

	void Print() {
		_MyDblLinkedList.PrintList();
	}

	int Size() {
		return _MyDblLinkedList.Size();
	}

	T front() {
		return _MyDblLinkedList.GetItem(0);
	}

	T back() {
		return _MyDblLinkedList.GetItem(Size() - 1);
	}

	void pop() {
		_MyDblLinkedList.DeleteFirstNode();
	}

	bool IsEmpty() {
		return _MyDblLinkedList.IsEmpty();
	}

	T GetItem(int Index) {
		return _MyDblLinkedList.GetItem(Index);
	}

	void Reverse() {
		_MyDblLinkedList.Reverse();
	}

	void UpdateItem(int Index, T value) {
		_MyDblLinkedList.UpdateItem(Index, value);
	}

	void InsertAfter(int Index, T value) {
		_MyDblLinkedList.InsertAfter(Index, value);
	}

	void InsertAtFront(T value) {
		_MyDblLinkedList.InsertAtBeginning(value);
	}

	void InsertAtBack(T value) {
		push(value);
	}

	void Clear() {
		_MyDblLinkedList.Clear();
	}
};

