/*
 * QueueTester.cpp
 *
 *  Created on: Nov 6, 2015
 *      Author: adams
 */

#include "QueueTester.h"
#include "Queue.h"
#include <iostream>
#include <cassert>
using namespace std;

void QueueTester::runTests() {
	cout << "Testing class Queue... " << endl;
	testConstructors();
	testAppend();
	cout << "All tests passed!" << flush;
}

void QueueTester::testAppend() {
	cout << "- append, getFirst, getLast... " << flush;
	Queue q0;
//	q0.append(11);
//	assert( q0.peekFirst() == 11 );
//	assert( q0.peekLast() == 11 );
//	assert( q0.getSize() == 1 );
//	assert( !q0.isEmpty() );
//	assert( !q0.isFull() );
	cout << " 0 " << flush;
	cout << " Passed!" << endl;
}

void QueueTester::testConstructors() {
	cout << "- constructors... " << flush;
	Queue q0;
	assert( q0.isEmpty() );
	assert( q0.getSize() == 0 );
	assert( !q0.isFull() );
	cout << " 0 " << flush;
	cout << " Passed!" << endl;
}

