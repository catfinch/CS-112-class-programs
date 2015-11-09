/*
 * Queue.h
 *
 *  Created on: Nov 6, 2015
 *      Author: adams
 */

#ifndef QUEUE_H_
#define QUEUE_H_

typedef double Item;

class Queue {
public:
	Queue();
	unsigned getSize() const { return mySize; }
	bool isEmpty() const     { return mySize == 0; }
	bool isFull() const      { return mySize == CAPACITY; }
 private:
	enum { CAPACITY = 5 };
	unsigned mySize, myFirst, myLast;
	Item     myArray[CAPACITY];
};

#endif /* QUEUE_H_ */
