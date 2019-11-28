/*******************************************************************************
 * This file is part of a basic implementation of the STL container classes.
 * 
 * Copyright (C) 2019, Jacob Still <https://github.com/jcstill>
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
********************************************************************************/

/*
THIS CLASS CONTAINS MEMORY LEAKS
*/

#ifndef __STACK_H__
#define __STACK_H__
#include <iostream>
using namespace std;

template<class T>struct node{
	T data;												// Stores data
	node<T> *next;										// Pointer to next node
};

template<class T>class Stack{
	private:
		node<T> *first;									// Pointer to first node
		int count;										// Current size of the Stack
		void copy(Stack<T> &);							// Deep copy the Stack
		
		node<T> *tFst;									// Temporary pointer for copy ops
		void hold(Stack<T> &);							// Create a tmp reversed stack 
	public:
		Stack();										// Default Constructor
		Stack(int);										// Non-default Constructor
		Stack(Stack<T>&);								// Copy Constructor
		~Stack();										// Destructor
		
		bool isEmpty();									// Checks if Stack is empty
		int sizeOf() const;								// Returns the current size of the Stack
		const T& top() const;							// Return element at top of Stack
		void push(const T&);							// Insert element at the front of the Stack
		void pop();										// Delete first element
		void swap(int, int);							// Swap elements
		void print();									// Prints entire Stack
		
		void resize(int);								// Make Stack X elements long adding or removing at the top
		void clear(int);								// Erase content through index
		void assign(const T&, int);						// Set value at index
		int search(const T&);							// Returns index of element if in Stack else returns -1
		void reverse();									// Reverses the whole Stack
		const Stack<T>& operator=(Stack<T>&);			// Overloaded assignment operator
		
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
template<class T>Stack<T>::Stack(){
	first = nullptr;
	tFst = nullptr;
	count = 0;
}
template<class T>Stack<T>::Stack(int x){
	first = nullptr;
	tFst = nullptr;
	count = 0;
	T tmp{};
	for(int i=0; i<x; i++){
		push(tmp);
	}
}
template<class T>Stack<T>::Stack(Stack<T>& x){
	first = nullptr;
	tFst = nullptr;
	count = 0;
	copy(x);
}
template<class T>Stack<T>::~Stack(){
	node<T> *tmp;
	while(first != nullptr){
		tmp = first;
		first = first -> next;
		delete tmp;
	}
	count = 0;
}
template<class T>void Stack<T>::hold(Stack<T> & x){
	int tsize = x.sizeOf();
	for(int i=0; i<tsize; i++){
		node<T> *newnode = nullptr;
		newnode = new node<T>;
		newnode -> data = x.top();
		newnode -> next = nullptr;
		if(tFst == nullptr){
			tFst = newnode;
		}else{
			newnode -> next = tFst;
			tFst = newnode;
		}
		x.pop();
	}
}
template<class T>void Stack<T>::copy(Stack<T> & x){
	int tsize = x.sizeOf();
	hold(x);
	for(int i=0; i<tsize; i++){
		push(tFst -> data);
		x.push(tFst -> data);
		if(tFst != nullptr){
			node<T> *current = tFst;
			tFst = tFst -> next;
			delete current;
		}
	}
}
template<class T>bool Stack<T>::isEmpty(){
	return count == 0;
}
template<class T>int Stack<T>::sizeOf() const{
	return count;
}
template<class T>const T& Stack<T>::top() const{
	return first -> data;
}
template<class T>void Stack<T>::push(const T& x){
	node<T> *newnode = nullptr;
	newnode = new node<T>;
	newnode -> data = x;
	newnode -> next = nullptr;
	if(first == nullptr){
		first = newnode;
	}else{
		newnode -> next = first;
		first = newnode;
	}
	count++;
}
template<class T>void Stack<T>::pop(){
	if(first != nullptr){
		node<T> *current = first;
		first = first -> next;
		delete current;
		count--;
	}
}
template<class T>void Stack<T>::swap(int x, int y){
	if(x >= 0 && x < count && y >= 0 && y < count && first != nullptr){
		node<T> *current = first;
		node<T> *current2 = first;
		for(int i=count-1; i>x; i--){
			current = current -> next;
		}
		for(int i=count-1; i>y; i--){
			current2 = current2 -> next;
		}
		T tmp = current -> data;
		T tmp2 = current2 -> data;
		current2 -> data = tmp;
		current -> data = tmp2;
	}
}
template<class T>void Stack<T>::print(){
	node<T> *current = first;
	for(int i=0; i<count; i++){
		if(current != nullptr){
			cout << "Index [" << count-i-1 << "] is: " << current -> data << '\n';
		}
		current = current -> next;
	}
}
template<class T>void Stack<T>::resize(int x){
	if(x > count){
		T tmp{};
		for(int i=count-x; i<0; i++){
			push(tmp);
		}
	}else if(x < count){
		for(int i=x; i<=count; i++){
			pop();
		}
	}
}
template<class T>void Stack<T>::clear(int x){
	for(int i=count-1; i>=x; i--){
		pop();
	}
}
template<class T>void Stack<T>::assign(const T& x, int y){
	node<T> *current = first;
	for(int i=count-1; i>y; i--){
		current = current -> next;
	}
	if(current != nullptr){
		current -> data = x;
	}
}
template<class T>int Stack<T>::search(const T& x){
	node<T> *current = first;
	for(int i=0; i<count; i++){
		if(current -> data == x){
			return count-i-1;
		}
		current = current -> next;
	}
	return -1;
}
template<class T>void Stack<T>::reverse(){
	for(int i=0; i<(count/2); i++){
		swap(i, count-i-1);
	}
}
template<class T>const Stack<T>& Stack<T>::operator=(Stack<T>& x){
	clear(count);
	first = nullptr;
	count = 0;
	if(this != &x){
		copy(x);
	}
	return *this;
}




#endif
