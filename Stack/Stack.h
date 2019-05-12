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
		void copy(const Stack<T> &);					// Deep copy the Stack
		// void hold();									// Create a holding stack 
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
		
		void resize(int);								// Make Stack X elements long adding or removing at the top
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

template<class T>Stack<T>::Stack(){
	first = nullptr;
	count = 0;
}
template<class T>Stack<T>::Stack(int x){
	first = nullptr;
	count = 0;
	T tmp{};
	for(int i=0; i<x; i++){
		push(tmp);
	}
}
template<class T>Stack<T>::Stack(const Stack<T>& x){
	first = nullptr;
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
	node<T> *current = nullptr;
	node<T> *curback = nullptr;
	node<T> *newnode = nullptr;
	newnode = new node<T>;
	newnode -> data = x;
	newnode -> next = nullptr;
	newnode -> prev = nullptr;
	if(first == nullptr){
		first = newnode;
		last = newnode;
		count++;
	}else{
		current = first;
		if(y == 0){
			first -> prev = newnode;
			newnode -> next = first;
			first = newnode;
			count++;
		}else if(y <= count){
			for(int i=0; i<y; i++){
				curback = current;
				current = current -> next;
			}
			if(current != nullptr){
				current -> prev = newnode;
				newnode -> next = current;
				newnode -> prev = curback;
				curback -> next = newnode;
			}else{
				curback -> next = newnode;
				newnode -> prev = curback;
				last = newnode;
			}
			count++;
		}
	}
}
template<class T>void Stack<T>::pop(){
	node<T> *current = first;
	node<T> *curback = nullptr;
	if(x == 0){
		first = first -> next;
		if(first != nullptr){
			first -> prev = nullptr;
		}else{
			last = nullptr;
		}
		delete current;
		count--;
	}else if(x<count){
		for(int i=0; i<x; i++){
			current = current -> next;
		}
		curback = current -> prev;
		curback -> next = current -> next;
		if(current -> next != nullptr){
			current -> next -> prev = curback;
		}
		if(current == last){
			last = curback;
		}
		count--;
		delete current;
	}
}

#endif