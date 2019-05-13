#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <iostream>
using namespace std;

template<class T>struct node{
	T data;												// Stores data
	node<T> *next;										// Pointer to next node
};

template<class T>class Queue{
	private:
		node<T> *first;									// Pointer to first node
		node<T> *last;									// Pointer to last node
		int count;										// Current size of the Queue
		void copy(Queue<T> &);					// Deep copy the Queue
		
		node<T> *tFst;									// Temporary pointer for copy ops
		void hold(Queue<T> &);							// Create a tmp reversed stack
	public:
		Queue();										// Default Constructor
		Queue(int);										// Non-default Constructor
		Queue(Queue<T>&);							// Copy Constructor
		~Queue();										// Destructor
		
		bool isEmpty();									// Checks if Queue is empty
		int sizeOf() const;								// Returns the current size of the Queue
		const T& front() const;							// Return element at front of Queue
		const T& back() const;							// Return element at back of Queue
		void push(const T&);							// Add element at the back
		void pop();										// Delete first element
		void swap(int, int);							// Swap elements
		void print();									// Prints entire Queue
		
		void resize(int);								// Make Queue X elements long adding to back or removing from front
		void clear(int);								// Erase content through index (start at front moving backwards)
		void assign(const T&, int);						// Set value at index
		int search(const T&);							// Returns index of element if in Queue else returns -1
		void reverse();									// Reverses the whole Queue
		const Queue<T>& operator=(Queue<T>&);		// Overloaded assignment operator
		
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
template<class T>Queue<T>::Queue(){
	first = nullptr;
	last = nullptr;
	tFst = nullptr;
	count = 0;
}
template<class T>Queue<T>::Queue(int x){
	first = nullptr;
	last = nullptr;
	tFst = nullptr;
	count = 0;
	T tmp{};
	for(int i=0; i<x; i++){
		push(tmp);
	}
}
template<class T>Queue<T>::Queue(Queue<T>& x){
	first = nullptr;
	last = nullptr;
	tFst = nullptr;
	count = 0;
	copy(x);
}
template<class T>Queue<T>::~Queue(){
	node<T> *tmp;
	while(first != nullptr){
		tmp = first;
		first = first -> next;
		delete tmp;
	}
	last = nullptr;
	count = 0;
}
template<class T>void Queue<T>::hold(Queue<T> & x){
	int tsize = x.sizeOf();
	for(int i=0; i<tsize; i++){
		node<T> *newnode = nullptr;
		newnode = new node<T>;
		newnode -> data = x.front();
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
template<class T>void Queue<T>::copy(Queue<T> & x){
	int tsize = x.sizeOf();
	hold(x);
	for(int i=0; i<tsize; i++){
		push(tFst -> data);
		x.push(tFst -> data);
		if(tFst != nullptr){
			node<T> *current = tFst;
			tFst = tFst -> next;
			current -> next = nullptr;
			delete current;
		}
	}
}
template<class T>bool Queue<T>::isEmpty(){
	return count == 0;
}
template<class T>int Queue<T>::sizeOf() const{
	return count;
}
template<class T>const T& Queue<T>::front() const{
	return first -> data;
}
template<class T>const T& Queue<T>::back() const{
	return last -> data;
}
template<class T>void Queue<T>::push(const T& x){
	node<T> *current = first;
	node<T> *newnode = nullptr;
	newnode = new node<T>;
	newnode -> data = x;
	newnode -> next = nullptr;
	if(first == nullptr){
		first = newnode;
		last = newnode;
	}else{
		last = newnode;
		for(int i=0; i<count-1; i++){
			current = current -> next;
		}
		current -> next = newnode;
	}
	count++;
}
template<class T>void Queue<T>::pop(){
	if(first != nullptr){
		node<T> *current = first;
		first = first -> next;
		current -> next = nullptr;
		delete current;
		count--;
	}
}
template<class T>void Queue<T>::swap(int x, int y){
	if(x >= 0 && x < count && y >= 0 && y < count && first != nullptr){
		node<T> *current = first;
		node<T> *current2 = first;
		for(int i=0; i<x; i++){
			current = current -> next;
		}
		for(int i=0; i<y; i++){
			current2 = current2 -> next;
		}
		T tmp = current -> data;
		T tmp2 = current2 -> data;
		current2 -> data = tmp;
		current -> data = tmp2;
	}
}
template<class T>void Queue<T>::print(){
	node<T> *current = first;
	for(int i=0; i<count; i++){
		if(current != nullptr){
			cout << "Index [" << i << "] is: " << current -> data << '\n';
		}
		current = current -> next;
	}
}
template<class T>void Queue<T>::resize(int x){
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
template<class T>void Queue<T>::assign(const T& x, int y){
	node<T> *current = first;
	for(int i=0; i<y; i++){
		current = current -> next;
	}
	if(current != nullptr){
		current -> data = x;
	}
}
template<class T>void Queue<T>::clear(int x){
	for(int i=0; i<=x; i++){
		pop();
	}
}
template<class T>int Queue<T>::search(const T& x){
	node<T> *current = first;
	for(int i=0; i<count; i++){
		if(current -> data == x){
			return i;
		}
		current = current -> next;
	}
	return -1;
}
template<class T>void Queue<T>::reverse(){
	for(int i=0; i<(count/2); i++){
		swap(i, count-i-1);
	}
}
template<class T>const Queue<T>& Queue<T>::operator=(Queue<T>& x){
	clear(count);
	first = nullptr;
	count = 0;
	if(this != &x){
		copy(x);
	}
	return *this;
}


#endif