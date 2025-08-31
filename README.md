# 📚 clsMyQueue Library (C++)

## ✨ Overview
A lightweight **C++ template-based queue implementation** built on top of a custom **Doubly Linked List** library ([clsDblLinkedList](https://github.com/yacineragueb/LinkedList-lib-cpp)).  
This project provides an easy-to-use queue class with standard operations (FIFO: First-In First-Out), additional helper methods, and extended functionality beyond the standard C++ `std::queue`.

This project is perfect for learning **Object-Oriented Programming (OOP)** in C++ and for building reusable libraries.

---

## 🚀 Features

- Generic template support (`clsMyQueue<T>`) for any data type.
- Queue operations implemented using a **Doubly Linked List**:
  - `push()` → Add item at the end.
  - `pop()` → Remove item from the front.
  - `front()` → Get the first element.
  - `back()` → Get the last element.
- Utility functions:
  - `Print()` → Display all elements.
  - `Size()` → Get the number of elements.
  - `IsEmpty()` → Check if queue is empty.
  - `Clear()` → Remove all elements.
- Extended operations (not available in `std::queue`):
  - `GetItem(index)` → Access element by index.
  - `UpdateItem(index, value)` → Update element at index.
  - `InsertAfter(index, value)` → Insert after a given index.
  - `InsertAtFront(value)` → Insert at beginning.
  - `InsertAtBack(value)` → Insert at end (alias for `push()`).
  - `Reverse()` → Reverse the queue.

---

## 💻 Example Usage

```cpp
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

// Expected Output
/*
Queue:
10 20 30 40 50

Queue Size: 5
Queue Front: 10
Queue Back: 50

Queue after pop():
20 30 40 50

Item(2): 40

Queue after reverse:
50 40 30 20

Queue after updating Item(2) to 600:
50 40 600 20

Queue after Inserting 800 after Item(2):
50 40 600 800 20

Queue after Inserting 1000 at front:
1000 50 40 600 800 20

Queue after Inserting 2000 at back:
1000 50 40 600 800 20 2000

Queue after clear:

*/

```

---

## 🛠️ Requirements: 
- A C++ compiler (GCC, Clang, MSVC, etc.)

