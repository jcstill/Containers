#ifndef __STRING_H__
#define __STRING_H__
#include <iostream>
#include "../List/List.h"
using namespace std;

class String{
	private:
		int size;
		int capacity;
		List<char> str;
		void copy(const String&);						// Deep copy the String
	public:
		String();
		String(int);
		String(const String&);
		~String();
		
		int sizeOf() const;
		int length() const;
		void resize(int);
		int capacityOf() const;
		void reserve(int);
		void clear();
		bool isEmpty();
		void shrink_to_fit();
		
		char at(int x) const;
		
		void pop_back();
		void push_back(const char);
		
		void print();
};

String::String(){
	List<char> str;
	size = 0;
	capacity = 0;
}
String::String(int x){
	List<char> str(x);
	size = x;
	capacity = x;
}
String::String(const String& x){
	List<char> str;
	size = 0;
	capacity = 0;
	copy(x);
}
String::~String(){
	str.~List();
	size = 0;
	capacity = 0;
}
void String::copy(const String& x){
	for(int i=0; i<x.sizeOf(); i++){
		str.push_front(x.at(i));
		size++;
		capacity++;
	}
}
void String::pop_back(){
	str.pop_back();
	size--;
	capacity--;
}
void String::push_back(char x){
	str.push_back(x);
	size++;
	capacity++;
}
int String::sizeOf() const{
	return size;
}
int String::length() const{
	return size;
}
void String::resize(int x){
	if(x > size){
		for(int i=size-x; i<0; i++){
			str.push_back('\0');
		}
	}else if(x < size){
		for(int i=x; i<size; i++){
			str.pop_back();
		}
	}
	size = x;
	capacity = x;
}
int String::capacityOf() const{
	return capacity;
}
void String::reserve(int x){
	if(x > capacity){
		for(int i=capacity-x; i<0; i++){
			str.push_back('\0');
		}
		capacity = x;
	}else if(x < capacity && x < size){
		shrink_to_fit();
	}else if(x < capacity && x > size){
		for(int i=0; i<capacity-x; i++){
			str.pop_back();
		}
		capacity = x;
	}
}
void String::clear(){
	resize(0);
}
bool String::isEmpty(){
	return size == 0;
}
void String::shrink_to_fit(){
	for(int i=capacity; i>size; i--){
		str.pop_back();
	}
	capacity = size;
}
char String::at(int x) const{
	return str.retAt(x);
}

// String::append
// String::assign
// String::back
// String::capacity
// String::compare
// String::copy
// String::c_str
// String::data
// String::erase
// String::find
// String::find_first_not_of
// String::find_first_of
// String::find_last_not_of
// String::find_last_of
// String::front
// String::get_allocator
// String::insert
// String::operator+=
// String::operator=
// String::operator[]
// String::replace
// String::rfind
// String::substr
// String::swap

void String::print(){
	str.print();
}

#endif



/*
Move Constructor
Move Assignment Operator
The overloaded Assignment Operator
*/