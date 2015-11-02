/*
 * Stack.h
 *
 *  Created on: Oct 26, 2015
 *      Author: adams
 */

#ifndef STACK_H_
#define STACK_H_

#include <stdexcept>
using namespace std;

template<class Item>
class Stack {
public:
	Stack();
	Stack(const Stack<Item>& original);
	~Stack()                              { delete myTopPtr; }
	bool isEmpty() const                  { return myTopPtr == NULL; }
	bool isFull() const                   { return false; }
	void push(const Item& item);
	Item peekTop()  const;
	Item pop();
private:
	struct Node {
		Node(const Item& it, Node* next) { myItem = it; myNext = next; }
		~Node() { delete myNext; }
		Item  myItem;
		Node* myNext;
	};
	Node* myTopPtr;
	friend class StackTester;
};

template<class Item>
Stack<Item>::Stack() {
	myTopPtr = NULL;
}

template<class Item>
Stack<Item>::Stack(const Stack<Item>& original) {
	// pointer to the node we're copying
	Node* oPtr = original.myTopPtr;
	// pointer to my current node
	Node* mPtr = NULL;
	// cover empty case
	myTopPtr = NULL;
	// copy top node, if there is one
	if (oPtr) {
		myTopPtr = new Node(oPtr->myItem, NULL);
		// prepare ptrs to copy the remaining nodes
		oPtr = oPtr->myNext;
		mPtr = myTopPtr;
	}
	// copy the rest of the nodes
	while (oPtr) {
		mPtr->myNext = new Node(oPtr->myItem, NULL);
		mPtr = mPtr->myNext;
		oPtr = oPtr->myNext;
	}
}

template<class Item>
void Stack<Item>::push(const Item& item) {
//	if ( isFull() ) {
//		throw overflow_error("Stack::push(): stack is full");
//	}
	myTopPtr = new Node(item, myTopPtr);
}

template<class Item>
Item Stack<Item>::peekTop()  const {
	if ( isEmpty() ) {
		throw underflow_error("Stack::peekTop(): stack is empty");
	}
	return myTopPtr->myItem;
}

template<class Item>
Item Stack<Item>::pop() {
	if ( isEmpty() ) {
		throw underflow_error("Stack::pop(): stack is empty");
	}
	Item it = myTopPtr->myItem;
	Node* newPtr = myTopPtr;
	myTopPtr = myTopPtr->myNext;
	newPtr->myNext = NULL;
	delete newPtr;
	return it;
}

#endif /* STACK_H_ */
