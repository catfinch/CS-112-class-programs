/*
 * StackTester.cpp
 *
 *  Created on: Oct 26, 2015
 *      Author: adams
 */

#include "StackTester.h"
#include "Stack.h"
#include <cassert>
#include <iostream>
#include <cstdlib>   // exit(1);
using namespace std;

void StackTester::runTests() {
	cout << "Testing class Stack..." << endl;
	testConstructors();
	testPushPopEtc();
	testAssignment();
	cout << "All tests passed!" << flush;
}

void StackTester::testAssignment() {
	cout << "- assignment... " << flush;
	//empty case
	Stack<double> st;
	Stack<double> st1;
	st1.push(11);
	st1 = st;
	assert(st1.isEmpty());
	cout << " 0 " << flush;
	//non-empty
	st1.push(99);
	st1.push(98);
	st1.push(97);
	Stack<double> st2;
	st2 = st1;
	assert(!st2.isEmpty());
	assert(st2.peekTop() == 97);
	assert(st2.myTopPtr != st1.myTopPtr);
	cout << " 1 " << flush;
	Stack<double> st3;
	Stack<double> st4;
	st4 = st3 = st2;
	assert(!st4.isEmpty());
	assert(st4.peekTop() == 97);
	assert(st4.myTopPtr != st3.myTopPtr);
	assert(!st3.isEmpty());
	assert(st3.peekTop() == 97);
	assert(st3.myTopPtr != st2.myTopPtr);
	assert(!st2.isEmpty());
	assert(st2.peekTop() == 97);
	assert(st2.myTopPtr != st1.myTopPtr);
	cout << " 2 " << flush;
	st4 = st4;
	assert(!st4.isEmpty());
	assert(st4.peekTop() == 97);
	assert(st4.pop()==97);
	assert(st4.peekTop() == 98);
	assert(st4.pop()==98);
	assert(st4.peekTop() == 99);
	assert(st4.pop()==99);
	assert(st4.isEmpty());

	assert(st3.peekTop() == 97);
	assert(st3.pop()==97);
	assert(st3.peekTop() == 98);
	assert(st3.pop()==98);
	assert(st3.peekTop() == 99);
	assert(st3.pop()==99);
	assert(st3.isEmpty());

	assert(st2.peekTop() == 97);
	assert(st2.pop()==97);
	assert(st2.peekTop() == 98);
	assert(st2.pop()==98);
	assert(st2.peekTop() == 99);
	assert(st2.pop()==99);
	assert(st2.isEmpty());
	cout<< " 3 "<<flush;
	cout << " Passed!" << endl;
}

void StackTester::testPushPopEtc() {
	cout << "- push, pop, etc..." << flush;
	// empty case for push
	Stack<int> st;
	st.push(11);
	assert(!st.isEmpty());
	assert(st.peekTop() == 11);
	cout << " 0 " << flush;
	// non-empty cases for push and peekTop
	st.push(22);
	assert(!st.isEmpty());
	assert(st.peekTop() == 22);
	cout << " 1 " << flush;
	st.push(33);
	assert(!st.isEmpty());
	assert(st.peekTop() == 33);
	cout << " 2 " << flush;
	st.push(44);
	assert(!st.isEmpty());
	assert(st.peekTop() == 44);
	cout << " 3 " << flush;
	st.push(55);
	assert(!st.isEmpty());
	assert(st.peekTop() == 55);
	cout << " 4 " << flush;
//	try {
//		st.push(66);
//		cerr << "push() worked on a full stack";
//		exit(1);
//	} catch (overflow_error& oe) {
//		cout << " 5 " << flush;
//	}
	// non-empty cases for pop
	assert(st.pop() == 55);
	assert(st.peekTop() == 44);
	cout << " 6 " << flush;
	assert(st.pop() == 44);
	assert(st.peekTop() == 33);
	cout << " 7 " << flush;
	assert(st.pop() == 33);
	assert(st.peekTop() == 22);
	cout << " 8 " << flush;
	assert(st.pop() == 22);
	assert(st.peekTop() == 11);
	cout << " 9 " << flush;
	assert(st.pop() == 11);
	// empty case for peekTop
	try {
		st.peekTop();
		cerr << "peekTop() worked on empty stack";
		exit(1);
	} catch (underflow_error& ue) {
		cout << " 10 " << flush;
	}
	// empty case for pop
	try {
		st.pop();
		cerr << "pop() worked on empty stack";
		exit(1);
	} catch (underflow_error& ue) {
		cout << " 11 " << flush;
	}

	cout << " Passed!" << endl;
}

void StackTester::testConstructors() {
	cout << "- constructors..." << flush;
	// default
	Stack<double> st;
	assert(st.isEmpty());
	cout << " 0 " << flush;

	// copy, empty case
	Stack<double> st1(st);
	assert(st1.isEmpty());
	cout << " 1 " << flush;
	// copy, nonempty cases
	st.push(11);
	Stack<double> st3(st);
	assert(!st3.isEmpty());
	assert(st3.peekTop() == 11);
	assert(st3.myTopPtr != st.myTopPtr);
	cout << " 2 " << flush;
	st.push(22);
	st.push(33);
	Stack<double> st4(st);
	assert(!st4.isEmpty());
	assert(st4.peekTop() == 33);
	assert(st4.myTopPtr != st.myTopPtr);
	cout << " 3 " << flush;
	st.pop();
	Stack<double> st5(st);
	assert(!st5.isEmpty());
	assert(st5.peekTop() == 22);
	assert(st5.myTopPtr != st.myTopPtr);
	cout << " 4 " << flush;
	st.pop();
	Stack<double> st6(st);
	assert(!st6.isEmpty());
	assert(st6.peekTop() == 11);
	assert(st6.myTopPtr != st.myTopPtr);
	cout << " 5 " << flush;
	assert(st6.pop() == 11);
	assert(st6.isEmpty());
	cout << " 6 " << flush;

	cout << " Passed!" << endl;
}
