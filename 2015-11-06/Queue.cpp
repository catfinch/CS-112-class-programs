/*
 * Queue.cpp
 *
 *  Created on: Nov 6, 2015
 *      Author: adams
 */

#include "Queue.h"

Queue::Queue() {
	mySize = myFirst = myLast = 0;
}

void Queue::append(const Item& item) {
	myArray[myLast] = item;
	myLast = (myLast+1)%CAPACITY;
	mySize++;
}

Item Queue::peekFirst() const {
	if (isEmpty()) {
		//error
	}
	return myArray[myFirst];
}

Item Queue::peekLast() const {
	if (isEmpty()) {
		//error
	}
	return myArray[(myLast-1+CAPACITY)%CAPACITY];
}
