/* ArrayQueue.cpp defines the methods for class ArrayQueue.
 * Joel Adams, for CS 112 at Calvin College.
 * Student name:
 * Date:
 */

#include "ArrayQueue.h"
#include <cstring>      // memcpy()
using namespace std;


//ArrayQueue::ArrayQueue(const ArrayQueue& original) {
//	makeCopyOf(original);
//}
//
//void ArrayQueue::makeCopyOf(const ArrayQueue& original) {
//	mySize = original.mySize;
//	myCapacity = original.myCapacity;
//	myFirst = original.myFirst;
//	myLast = original.myLast;
//	myArray = new Item[myCapacity];
//	memcpy(myArray, original.myArray, myCapacity*sizeof(Item) );
//}
//
//ArrayQueue::~ArrayQueue() {
//	delete [] myArray;
//	myArray = NULL;
//	mySize = myFirst = myLast = 0;
//}
//
//
//ArrayQueue& ArrayQueue::operator=(const ArrayQueue& aQueue) {
//	if (this != &aQueue) {
//		delete [] myArray;
//		makeCopyOf(aQueue);
//	}
//	return *this;
//}
//
//bool ArrayQueue::isEmpty() const {
//	return mySize == 0;
//}
//
//bool ArrayQueue::isFull() const {
//	return getSize() == myCapacity;
//}
//
//unsigned ArrayQueue::getCapacity() const {
//	return myCapacity;
//}
//
//unsigned ArrayQueue::getSize() const {
//	return mySize;
//}

