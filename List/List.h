#ifndef __LIST_H__
#define __LIST_H__
#include <iostream>
using namespace std;

template<class T>struct node{
	T data;												// Stores data
	node<T> *next;										// Pointer to next node
	node<T> *prev;										// Pointer to previous node
};

template<class T>class List{
	private:
		node<T> *first;									// Pointer to first node
		node<T> *last;									// Pointer to last node
		int count;										// Current size of the list
		void copy(const List<T> &);						// Deep copy the list
	public:
		List();											// Default Constructor
		List(int);										// Non-default Constructor
		List(const List<T>&);							// Copy Constructor
		~List();										// Destructor
		
		void resize(int);								// Make list X elements long (shortening list will destroy remaining elements)
		void swap(int, int);							// Swap elements
		void erase(int);								// Erase element at index
		void clear(int, int);							// Erase content range (first, last)
		void push_front(const T&);						// Insert element at the front of the list
		void pop_front();								// Delete first element
		void push_back(const T&);						// Insert element at the end of the list
		void pop_back();								// Delete last element
		void insert(const T&, int);						// Insert element at position
		void assign(const T&, int);						// Set value at index
		int sizeOf() const;								// Returns the current size of the list
		const T& retFront() const;						// Returns first element of list
		const T& retEnd() const;						// Returns last element of list
		void print();									// Prints entire list
		bool isEmpty();									// Checks if list is empty
		const T& retAt(int) const;						// Return element at index
		int search(const T&);							// Returns index of element if in list else returns -1
		void reverse();									// Reverses the whole list
		const List<T>& operator=(const List<T>&);		// Overloaded assignment operator
		
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
template<class T>List<T>::List(){
	first = nullptr;
	last  = nullptr;
	count = 0;
}
template<class T>List<T>::List(int x){
	first = nullptr;
	last  = nullptr;
	count = 0;
	T tmp{};
	for(int i=0; i<x; i++){
		push_back(tmp);
	}
}
template<class T>List<T>::List(const List<T>& x){
	first = nullptr;
	last  = nullptr;
	count = 0;
	copy(x);
}
template<class T>void List<T>::copy(const List<T> & x){
	for(int i=0; i<x.sizeOf(); i++){
		T tmp = x.retAt(i);
		push_back(tmp);
	}
}
template<class T>List<T>::~List(){
	node<T> *tmp;
	while(first != nullptr){
		tmp = first;
		first = first -> next;
		delete tmp;
	}
	last = nullptr;
	count = 0;
}
template<class T>void List<T>::resize(int x){
	if(x > count){
		T tmp{};
		for(int i=x-count; i<x; i++){
			push_back(tmp);
		}
	}else if(x < count){
		for(int i=x; i<=count; i++){
			pop_back();
		}
	}
}
template<class T>void List<T>::swap(int x, int y){
	if(x >= 0 && x < count && y >= 0 && y < count){
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
template<class T>void List<T>::erase(int x){
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
template<class T>void List<T>::clear(int x, int y){
	if(y > x){
		for(int i=y; i>=x; i--){
			erase(i);
		}
	}else if(x > y){
		for(int i=x; i>=y; i--){
			erase(i);
		}
	}
}
template<class T>void List<T>::push_front(const T& x){
	insert(x, 0);
}
template<class T>void List<T>::pop_front(){
	erase(0);
}
template<class T>void List<T>::push_back(const T& x){
	insert(x, count);
}
template<class T>void List<T>::pop_back(){
	erase(count - 1);
}
template<class T>void List<T>::insert(const T& x, int y){
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
template<class T>void List<T>::assign(const T& x, int y){
	node<T> *current = first;
	for(int i=0; i<y; i++){
		current = current -> next;
	}
	if(current != nullptr){
		current -> data = x;
	}
}
template<class T>int List<T>::sizeOf() const{
	return count;
}
template<class T>const T& List<T>::retFront() const{
	return first -> data;
}
template<class T>const T& List<T>::retEnd() const{
	return last -> data;
}
template<class T>const T& List<T>::retAt(int x) const{
	node<T> *current = first;
	for(int i=0; i<x; i++){
		current = current -> next;
	}
	if(current != nullptr){
		return current -> data;
	}else{
		cout << "\nERROR! List<T>::retAt(int) out of bounds\n";
		return first -> data;
	}
}
template<class T>void List<T>::print(){
	node<T> *current = first;
	for(int i=0; i<count; i++){
		if(current != nullptr){
			cout << "Index [" << i << "] is: " << current -> data << '\n';
		}
		current = current -> next;
	}
}
template<class T>bool List<T>::isEmpty(){
	return count == 0;
}
template<class T>int List<T>::search(const T& x){
	node<T> *current = first;
	for(int i=0; i<count; i++){
		if(current -> data == x){
			return i;
		}
		current = current -> next;
	}
	return -1;
}
template<class T>void List<T>::reverse(){
	
}
template<class T>const List<T>& List<T>::operator=(const List<T>& x){
	clear(0, count - 1);
	if(this != &x){
		copy(x);
	}
	return *this;
}

#endif