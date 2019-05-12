#ifndef __STACK_H__
#define __STACK_H__
#include <iostream>
using namespace std;

template<class T>struct node{
	T data;												// Stores data
	node<T> *next;										// Pointer to next node
	node<T> *prev;										// Pointer to previous node
};

template<class T>class Stack{
	private:
		node<T> *first;									// Pointer to first node
		node<T> *last;									// Pointer to last node
		int count;										// Current size of the Stack
		void copy(const Stack<T> &);					// Deep copy the Stack
	public:
		Stack();										// Default Constructor
		Stack(int);										// Non-default Constructor
		Stack(const Stack<T>&);							// Copy Constructor
		~Stack();										// Destructor
		
		bool isEmpty();									// Checks if Stack is empty
		int sizeOf() const;								// Returns the current size of the Stack
		const T& top() const;							// Return element at top of Stack
		void push(const T&);							// Insert element at the front of the Stack
		void pop();										// Delete first element
		void swap(int, int);							// Swap elements
		
		void resize(int);								// Make Stack X elements long (shortening Stack will destroy remaining elements)
		void erase(int);								// Erase element at index
		void clear(int, int);							// Erase content range (first, last)
		void insert(const T&, int);						// Insert element at position
		void assign(const T&, int);						// Set value at index
		void print();									// Prints entire Stack
		int search(const T&);							// Returns index of element if in Stack else returns -1
		void reverse();									// Reverses the whole Stack
		const Stack<T>& operator=(const Stack<T>&);		// Overloaded assignment operator
		
/*
Functions for iterator:
	begin			Return iterator to beginning (public member function )
	end				Return iterator to end (public member function)
	rbegin			Return reverse iterator to reverse beginning (public member function )
	rend			Return reverse iterator to reverse end (public member function )
	cbegin 			Return const_iterator to beginning (public member function )
	cend 			Return const_iterator to end (public member function )
	crbegin 		Return const_reverse_iterator to reverse beginning (public member function )
	crend 			Return const_reverse_iterator to reverse end (public member function )
	data 			Access data (public member function )
	get_allocator	Get allocator (public member function )
*/
};

#endif
