/* LinkedQueue.cpp defines the methods for class LinkedQueue.
 * Joel Adams, for CS 112 at Calvin College.
 * Student name:
 * Date:
 */

#include "LinkedQueue.h"


//LinkedQueue::LinkedQueue(const LinkedQueue& original) {
//	makeCopyOf(original);
//}
//
//void LinkedQueue::makeCopyOf(const LinkedQueue& original) {
//	mySize = original.mySize;
//	if ( mySize == 0 ) {
//		myFirst = myLast = NULL;
//	} else {
//		myFirst = new Node(original.getFirst(), NULL);
//		Node * temp0 = original.myFirst->myNext;
//		Node * temp1 = myFirst;
//		while (temp0 != NULL) {
//			temp1->myNext = new Node(temp0->myItem, NULL);
//			temp1 = temp1->myNext;
//			temp0 = temp0->myNext;
//		}
//		myLast = temp1;
//	}
//}
//
//LinkedQueue::~LinkedQueue() {
//	delete myFirst;
//	myFirst = myLast = NULL;
//	mySize = 0;
//}
//
//LinkedQueue& LinkedQueue::operator=(const LinkedQueue& aQueue) {
//	if (this != &aQueue) {
//		delete myFirst;    // invokes recursive ~Node()
//		makeCopyOf(aQueue);
//	}
//	return *this;
//}
//
//
//
//bool LinkedQueue::isFull() const {
//	return false;
//}


