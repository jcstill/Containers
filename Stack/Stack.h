#ifndef __STACK_H__
#define __STACK_H__
#include <iostream>
using namespace std;

template<class T>class Stack{
	private:
		T *array;										// Actual array of elements
	public:
		Stack();
		Stack(int);
		Stack();
		~Stack();
};

#endif