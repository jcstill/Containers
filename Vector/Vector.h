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

#ifndef __VECTOR_H__
#define __VECTOR_H__
#include <iostream>
using namespace std;

const int DEFSIZE = 8;

template<class T>class Vector{
	private:
		T *array;										// Actual array of elements
		int size;										// Current size of the vector
		int capacity;									// Total capacity of the vector
		int front;										// First element number
		int end;										// Last element number
		
		void grow();									// Make "capacity" larger
		void copy(const Vector<T> &);					// Deep copy the array
	public:
		Vector();										// Default Constructor
		Vector(int);									// Non-default Constructor
		Vector(const Vector<T>&);						// Copy Constructor
		~Vector();										// Destructor
		
		void assign(const T&, int);						// Set value at index
		void initialize();								// Initializes a pre-constructed vector
		int sizeOf() const;								// Returns the current size of the vector
		int capacityOf() const;							// Returns the maximum size of the vector
		void push_front(const T&);						// Insert element at the front of the list
		void pop_front();								// Delete first element
		void push_back(const T&);						// Insert element at the end of the array
		void pop_back();								// Delete last element
		void insert(const T&, int);						// Add new element to array at index
		void clear(int, int);							// Erase content range (first, last)
		const T& retFront() const;						// Return the first index of the array
		const T& retEnd() const;						// Return the last index of the array
		int search(const T&);							// Returns index of element if in array else returns -1
		void erase(int);								// Erases element at index
		void swap(int, int);							// Swaps elements
		void print();									// Prints entire array
		bool isEmpty();									// Checks if array is empty
		void shrink_to_fit();							// Shrink array to fit data
		void resize(int);								// Make array X elements long (shortening list will destroy remaining elements)
		const T& retAt(int) const;						// Return element at index
		void reverse();									// Reverses the whole array
		const Vector<T>& operator=(const Vector<T>&);	// Overloaded assignment operator
		const T& operator[](int) const;					// Overloaded bracket operator
		
/*
Functions for iterator:
begin			Return iterator to beginning (public member function )
end				Return iterator to end (public member function )
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
template<class T>Vector<T>::Vector(){
	array = new T[DEFSIZE];
	size = 0;
	capacity = DEFSIZE;
	front = 0;
	end = 0;
}
template<class T>Vector<T>::Vector(int x){
	if(x>0){
		array = new T[x];
		capacity = x;
	}else{
		array = new T[DEFSIZE];
		capacity = DEFSIZE;
	}
	size = 0;
	front = 0;
	end = 0;
}
template<class T>Vector<T>::Vector(const Vector<T>& x){
	copy(x);
}
template<class T>Vector<T>::~Vector(){
	delete [] array;
}
template<class T>void Vector<T>::assign(const T& x, int y){
	if(y >= 0 && y < size){
		array[y] = x;
	}
}
template<class T>void Vector<T>::copy(const Vector<T>& x){
	this->size = x.sizeOf();
	this->capacity = x.capacityOf();
	this->front = 0;
	this->end = size;
	this->array = new T[this->capacity];
	for(int i=0; i<this->capacity; i++){
		this->array[i] = x[i];
	}
}
template<class T>void Vector<T>::grow(){
	T *tmp;
	tmp = array;
	capacity *= 2;
	array = new T[capacity];
	int w=0;
	for(int i=0; i<size; i++){
		array[w] = tmp[i];
		w++;
	}
	delete [] tmp;
}
template<class T>void Vector<T>::shrink_to_fit(){
	T *tmp;
	tmp = array;
	capacity = size;
	array = new T[capacity];
	int w=0;
	for(int i=0; i<size; i++){
		array[w] = tmp[i];
		w++;
	}
	delete [] tmp;
}
template<class T>void Vector<T>::resize(int x){
	if(x >= capacity){
		T *tmp;
		tmp = array;
		capacity = x;
		array = new T[capacity];
		int w=0;
		for(int i=0; i<size; i++){
			array[w] = tmp[i];
			w++;
		}
		size = capacity;
		delete [] tmp;
	}else if(x < capacity){
		T *tmp;
		tmp = array;
		capacity = x;
		array = new T[capacity];
		int w=front;
		size = 0;
		end = 0;
		for(int i=0; i<capacity; i++){
			array[i] = tmp[w];
			w++;
			size++;
			end++;
		}
		delete [] tmp;
	}
}
template<class T>void Vector<T>::initialize(){
	delete [] array;
	array = new T[DEFSIZE];
	size = 0;
	capacity = DEFSIZE;
	front = 0;
	end = 0;
}
template<class T>int Vector<T>::sizeOf() const{
	return size;
}
template<class T>int Vector<T>::capacityOf() const{
	return capacity;
}
template<class T>void Vector<T>::push_front(const T& x){
	insert(x, 0);
}
template<class T>void Vector<T>::pop_front(){
	erase(0);
}
template<class T>void Vector<T>::push_back(const T& x){
	insert(x, end);
}
template<class T>void Vector<T>::pop_back(){
	erase(size - 1);
}
template<class T>void Vector<T>::insert(const T& x, int y){
	if(y >= 0 && y <= size){
		size++;
		end++;
		if(size == capacity){
			grow();
		}
		for(int i=size; i>=y; i--){
			array[i] = array[i-1];
		}
		array[y] = x;
	}
}
template<class T>const T& Vector<T>::retFront() const{
	return array[front];
}
template<class T>const T& Vector<T>::retEnd() const{
	return array[end -1];
}
template<class T>int Vector<T>::search(const T& x){
	for(int i=0; i<capacity; i++){
		if(array[i] == x){
			return i;
		}
	}
	return -1;
}
template<class T>void Vector<T>::erase(int x){
	if(x>=0 && x<capacity){
		if(front<end){
			if(x<=end && x>=front && size!=capacity){
				for(int i=x; i<end; i++){
					array[i] = array[i+1];
				}
				end--;
				size--;
			}else if(x<=end && x>=front && size==capacity){
				for(int i=x; i<end-1; i++){
					array[i] = array[i+1];
				}
				end--;
				size--;
			}
		}else if(front>end){
			if(x>end && x>=front){
				for (int i=x; i>front; i--){
					array[i] = array[i-1];
				}
				front++;
				size--;
			}else if(x<=end && x<front){
				for(int i=x; i<end; i++){
					array[i] = array[i+1];
				}
				end--;
				size--;
			}
		}else if (front==end){
			if(x==front){
				size = 0;
				front = 0;
				end = 0;
			}
		}
	}
}
template<class T>void Vector<T>::print(){
	if(size != 0){
		for(int i=0; i<size; i++){
			cout << "Index [" << i << "] is: " << array[i] << '\n';
		}
	}
}
template<class T>bool Vector<T>::isEmpty(){
	return size==0;
}
template<class T>const Vector<T>& Vector<T>::operator=(const Vector<T>& x){
	if(this != &x){
		copy(x);
	}
	return *this;
}
template<class T>const T& Vector<T>::operator[](int x) const{
	if(x>=0 && x<=capacity){
		return array[x];
	}
	return array[0];
}
template<class T>void Vector<T>::swap(int x, int y){
	T tmp = array[x];
	array[x] = array[y];
	array[y] = tmp;
}
template<class T>void Vector<T>::clear(int x, int y){
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
template<class T>const T& Vector<T>::retAt(int x) const{
	if(x>=0 && x<capacity && x<size){
		return array[x];
	}
	cout << "\nERROR! Vector<T>::retAt(int) out of bounds\n";
	return array[0];
}
template<class T>void Vector<T>::reverse(){
	for(int i=0; i<(size/2); i++){
		swap(i, size-i-1);
	}
}

#endif