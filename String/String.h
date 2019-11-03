#ifndef __STRING_H__
#define __STRING_H__
#include <iostream>
#include "../List/List.h"
using namespace std;

class String{
	private:
		int size;											// Current size of the String
		int capacity;										// Total capacity of the String
		List<char> str;										// Actual String stored as a list
		// char* array;

		void dcopy(const String&);							// Deep copy the String
		void dcopy(const char*);							// Deep copy the String
		void dcopy(char);									// Deep copy the String
	public:
		String();											// Default Constructor
		String(int);										// Non-default Constructor
		String(const String&);								// Copy Constructor
		String(const char*);								// Copy Constructor
		String(char);										// Copy Constructor
		~String();											// Destructor
		// Overloaded operators
		String& operator=(const String&);					// Replaces this String with String passed in
		String& operator=(const char*);						// Replaces this String with const char* passed in - ei.( "Hello World" )
		String& operator=(char);							// Replaces this String with char passed in - ei.( 'Y' )
		String& operator+=(const String&);					// Append String to end of this String
		String& operator+=(const char*);					// Append const char* to end of this String - ei.( "Hello World" )
		String& operator+=(char);							// Append char to end of this String - ei.( 'Y' )
		char operator[](int) const;							// Return character in String
		// Capacity and sizing functions
		int sizeOf() const;									// Returns size of the String
		int length() const;									// Returns size of the String
		void resize(int);									// Resize String - Can modify String
		int capacityOf() const;								// Returns the size of allocated storage
		void reserve(int);									// Resize String - Can't modify String
		void clear();										// Clear the String - Resets capacity to 0
		bool isEmpty();										// Check if String is empty
		void shrink_to_fit();								// Shrink capacity to fit size
		// Element access
		char at(int) const;									// Return character in String
		char back() const;									// Return last character
		char front() const;									// Return first character
		// Modifiers
		String& append(const String&);						// Append String to end of this String
		String& append(const char*);						// Append const char* to end of this String - ei.( "Hello World" )
		String& append(char);								// Append char to end of this String - ei.( 'Y' )
		void push_back(const char);							// Append character to String
		String& assign(const String&);						// Replaces this String with String passed in
		String& assign(const char*);						// Replaces this String with const char* passed in - ei.( "Hello World" )
		String& assign(char);								// Replaces this String with char passed in - ei.( 'Y' )
		String& insert(int, const String&);					// Inserts a copy of String into this String
		String& insert(int, const char*);					// Inserts a copy of const char* into this String - ei.( "Hello World" )
		String& insert(int, char);							// Inserts a copy of char into this String - ei.( 'Y' )
		void erase(int, int);								// Erase portion of this String ()
		String& replace(int, int, const String&);			// Replace portion of this String with String
		String& replace(int, int, const char*);				// Replace portion of this String with const char* - ei.( "Hello World" )
		String& replace(int, int, char);					// Replace portion of this String with char - ei.( 'Y' )
		void swap(String&);									// Swaps contents of this String with String
		void pop_back();									// Delete last character
		// String Operations

		// const char* c_str() const;							// Return pointer to char array of String

		// const char* data() const;							// Return pointer to char array of String

		int copy(char*, int, int) const;					// Copy portion of this String to a char array
		int find(const String&, int=0) const;				// Search this String for the first occurrence of String starting at a position
		int find(const char*, int=0) const;					// Search this String for the first occurrence of const char* starting at a position - ei.( "Hello World" )
		int find(char, int=0) const;						// Search this String for the first occurrence of char starting at a position - ei.( 'Y' )
		int rfind(const String&, int=0) const;				// Search this String for the last occurrence of String starting at a position
		int rfind(const char*, int=0) const;				// Search this String for the last occurrence of const char* starting at a position - ei.( "Hello World" )
		int rfind(char, int=0) const;						// Search this String for the last occurrence of char starting at a position - ei.( 'Y' )
		int find_first_of(const String&, int=0) const;		// Search this String for the first character that matches any of the charaters in String starting at a position
		int find_first_of(const char*, int=0) const;		// Search this String for the first character that matches any of the charaters in const char* starting at a position - ei.( "Hello World" )
		int find_first_of(char, int=0) const;				// Search this String for the first character that matches char starting at a position - ei.( 'Y' )
		int find_last_of(const String&, int=0) const;		// Search this String for the last character that matches any of the charaters in String starting at a position
		int find_last_of(const char*, int=0) const;			// Search this String for the last character that matches any of the charaters in const char* starting at a position - ei.( "Hello World" )
		int find_last_of(char, int=0) const;				// Search this String for the last character that matches char starting at a position - ei.( 'Y' )
		int find_first_not_of(const String&, int=0) const;	// Search this String for the first character that does not match any of the charaters in String starting at a position
		int find_first_not_of(const char*, int=0) const;	// Search this String for the first character that does not match any of the charaters in const char* starting at a position - ei.( "Hello World" )
		int find_first_not_of(char, int=0) const;			// Search this String for the first character that does not char starting at a position - ei.( 'Y' )
		int find_last_not_of(const String&, int=0)const;	// Search this String for the last character that does not match any of the charaters in String starting at a position
		int find_last_not_of(const char*, int=0) const;		// Search this String for the last character that does not match any of the charaters in const char* starting at a position - ei.( "Hello World" )
		int find_last_not_of(char, int=0) const;			// Search this String for the last character that does not char starting at a position - ei.( 'Y' )

		// String substr(int, int);							// Return a new String object that is a substring copy of this String

		// int compare(const String&) const;					// Compare this String to String
		// int compare(const char*) const;						// Compare this String to const char* - ei.( "Hello World" )
		// int compare(char) const;							// Compare this String to char - ei.( 'Y' )
															// 0	They are equal
															// <0	Value of the first character that doesn't match is lower in the compared string, or all compared characters match but the compared string is shorter.
															// >0	Value of the first character that doesn't match is higher in the compared string, or all compared characters match but the compared string is longer.
		// Debugging
		void print();										// Print the entire string - For debugging only
};

String::String(){
	List<char> str;
	size = 0;
	capacity = 0;
	// array = NULL;
}
String::String(int x){
	List<char> str(x);
	size = 0;
	capacity = x;
	// array = NULL;
}
String::String(const String& x){
	List<char> str;
	size = 0;
	capacity = 0;
	// array = NULL;
	dcopy(x);
}
String::String(const char* x){
	List<char> str;
	size = 0;
	capacity = 0;
	// array = NULL;
	dcopy(x);
}
String::String(char x){
	List<char> str;
	size = 0;
	capacity = 0;
	// array = NULL;
	dcopy(x);
}
String::~String(){
	str.~List();
	size = 0;
	capacity = 0;
	// if(array != NULL){
		// cout << "yeet\n";
		// delete [] array;
	// }
}
void String::dcopy(const String& x){
	for(int i=0; i<x.sizeOf(); i++){
		str.push_back(x.at(i));
		size++;
		capacity++;
	}
}
void String::dcopy(const char* x){
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	for(int i=0; i<constsize; i++){
		str.push_back(x[i]);
		size++;
		capacity++;
	}
}
void String::dcopy(char x){
	str.push_back(x);
	size++;
	capacity++;
}
// Overloaded operators
String& String::operator=(const String& x){
	clear();
	for(int i=0; i<x.sizeOf(); i++){
		str.push_back(x.at(i));
		size++;
		capacity++;
	}
	return *this;
}
String& String::operator=(const char* x){
	clear();
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	for(int i=0; i<constsize; i++){
		str.push_back(x[i]);
		size++;
		capacity++;
	}
	return *this;
}
String& String::operator=(char x){
	clear();
	str.push_back(x);
	size++;
	capacity++;
	return *this;
}
String& String::operator+=(const String& x){
	for(int i=0; i<x.sizeOf(); i++){
		str.push_back(x.at(i));
		size++;
		capacity++;
	}
	return *this;
}
String& String::operator+=(const char* x){
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	for(int i=0; i<constsize; i++){
		str.push_back(x[i]);
		size++;
		capacity++;
	}
	return *this;
}
String& String::operator+=(char x){
	str.push_back(x);
	size++;
	capacity++;
	return *this;
}
char String::operator[](int x) const{
	return str.retAt(x);
}
// Capacity and sizing functions
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
// Element access
char String::at(int x) const{
	if(x >= 0){
		return str.retAt(x);
	}
	return 255;
}
char String::back() const{
	return str.retEnd();
}
char String::front() const{
	return str.retFront();
}
// Modifiers
String& String::append(const String& x){
	for(int i=0; i<x.sizeOf(); i++){
		str.push_back(x.at(i));
		size++;
		capacity++;
	}
	return *this;
}
String& String::append(const char* x){
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	for(int i=0; i<constsize; i++){
		str.push_back(x[i]);
		size++;
		capacity++;
	}
	return *this;
}
String& String::append(char x){
	str.push_back(x);
	size++;
	capacity++;
	return *this;
}
String& String::assign(const String& x){
	clear();
	for(int i=0; i<x.sizeOf(); i++){
		str.push_back(x.at(i));
		size++;
		capacity++;
	}
	return *this;
}
String& String::assign(const char* x){
	clear();
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	for(int i=0; i<constsize; i++){
		str.push_back(x[i]);
		size++;
		capacity++;
	}
	return *this;
}
String& String::assign(char x){
	clear();
	str.push_back(x);
	size++;
	capacity++;
	return *this;
}
String& String::insert(int y, const String& x){
	for(int i=x.sizeOf()-1; i>=0; i--){
		str.insert(x.at(i), y);
		size++;
		capacity++;
	}
	return *this;
}
String& String::insert(int y, const char* x){
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	for(int i=constsize-1; i>=0; i--){
		str.insert(x[i], y);
		size++;
		capacity++;
	}
	return *this;
}
String& String::insert(int y, char x){
	str.insert(x, y);
	size++;
	capacity++;
	return *this;
}
void String::String::erase(int x, int y){
	int tmp = 0;
	if(x > y){
		tmp = x;
		x = y;
		y = tmp;
	}
	str.clear(x, y);
	tmp = y - x +1;
	size -= tmp;
	capacity -= tmp;
}
String& String::replace(int y, int len, const String& x){
	erase(y, y+len);
	insert(y, x);
	return *this;
}
String& String::replace(int y, int len, const char* x){
	erase(y, y+len);
	insert(y, x);
	return *this;
}
String& String::replace(int y, int len, char x){
	erase(y, y+len);
	insert(y, x);
	return *this;
}
void String::swap(String& x){
	String tmp(x);
	x.assign(*this);
	assign(tmp);
	tmp.~String();
}
// String Operations
// const char* String::c_str(){
// 	delete [] array;
// 	array = new char[size+1];
// 	for(int i=0; i<size; i++){
// 		array[i] = at(i);
// 	}
// 	array[size] = '\0';
// 	return array;
// }
// const char* data() const{

// }
int String::copy(char* x, int y, int len) const{
	int constsize = 0;
	for(int i=y; i<y+len; i++){
		x[i-y] = at(i);
		constsize++;
	}
	return constsize;
}
int String::find(const String& x, int y) const{
	int xpos = 0;
	while(y < size){
		if(at(y) == x.at(xpos)){
			xpos++;
		}else if(at(y) == x.at(xpos-1)){
			xpos=1;
		}else{
			xpos=0;
		}
		if(xpos == x.sizeOf()){
			return y-xpos+1;
		}
		y++;
	}
	return -1;
}
int String::find(const char* x, int y) const{
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	int xpos = 0;
	while(y < size){
		if(at(y) == x[xpos]){
			xpos++;
		}else if(at(y) == x[xpos-1]){
			xpos=1;
		}else{
			xpos=0;
		}
		if(xpos == constsize){
			return y-xpos+1;
		}
		y++;
	}
	return -1;
}
int String::find(char x, int y) const{
	while(y < size){
		if(at(y) == x){
			return y;
		}else{
			y++;
		}
	}
	return -1;
}
int String::rfind(const String& x, int y) const{
	int search = size-1;
	int xpos = x.sizeOf()-1;
	while(search >= y){
		if(at(search) == x.at(xpos)){
			xpos--;
		}else if(at(search) == x.at(xpos+1)){
			xpos=x.sizeOf()-2;
		}else{
			xpos=x.sizeOf()-1;
		}
		if(xpos == 0){
			return search-xpos-x.sizeOf()+2;
		}
		search--;
	}
	return -1;
}
int String::rfind(const char* x, int y) const{
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	int search = size-1;
	int xpos = constsize-1;
	while(search >= y){
		if(at(search) == x[xpos]){
			xpos--;
		}else if(at(search) == x[xpos+1]){
			xpos=constsize-2;
		}else{
			xpos=constsize-1;
		}
		if(xpos == 0){
			return search-xpos-constsize+2;
		}
		search--;
	}
	return -1;
}
int String::rfind(char x, int y) const{
	int search = size-1;
	while(search >= y){
		if(at(search) == x){
			return search;
		}else{
			search--;
		}
	}
	return -1;
}
int String::find_first_of(const String& x, int y) const{
	int xpos;
	while(y < size){
		xpos = 0;
		while(xpos < x.sizeOf()){
			if(at(y) == x.at(xpos)){
				return y;
			}
			xpos++;
		}
		y++;
	}
	return -1;
}
int String::find_first_of(const char* x, int y) const{
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	int xpos;
	while(y < size){
		xpos = 0;
		while(xpos < constsize){
			if(at(y) == x[xpos]){
				return y;
			}
			xpos++;
		}
		y++;
	}
	return -1;
}
int String::find_first_of(char x, int y) const{
	while(y < size){
		if(at(y) == x){
			return y;
		}else{
			y++;
		}
	}
	return -1;
}
int String::find_last_of(const String& x, int y) const{
	int search = size-1;
	int xpos;
	while(search > y){
		xpos = 0;
		while(xpos < x.sizeOf()){
			if(at(search) == x[xpos]){
				return search;
			}
			xpos++;
		}
		search--;
	}
	return -1;
}
int String::find_last_of(const char* x, int y) const{
	int search = size-1;
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	int xpos;
	while(search > y){
		xpos = 0;
		while(xpos < constsize){
			if(at(search) == x[xpos]){
				return search;
			}
			xpos++;
		}
		search--;
	}
	return -1;
}
int String::find_last_of(char x, int y) const{
	int search = size-1;
	while(search >= y){
		if(at(search) == x){
			return search;
		}else{
			search--;
		}
	}
	return -1;
}
int String::find_first_not_of(const String& x, int y) const{
	int xpos;
	int tmp;
	while(y < size){
		xpos = 0;
		tmp = 0;
		while(xpos < x.sizeOf()){
			if(at(y) == x.at(xpos)){
				tmp++;
			}
			xpos++;
		}
		if(tmp == 0){
			return y;
		}
		y++;
	}
	return -1;
}
int String::find_first_not_of(const char* x, int y) const{
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	int xpos;
	int tmp;
	while(y < size){
		xpos = 0;
		tmp = 0;
		while(xpos < constsize){
			if(at(y) == x[xpos]){
				tmp++;
			}
			xpos++;
		}
		if(tmp == 0){
			return y;
		}
		y++;
	}
	return -1;
}
int String::find_first_not_of(char x, int y) const{
	while(y < size){
		if(at(y) != x){
			return y;
		}else{
			y++;
		}
	}
	return -1;
}
int String::find_last_not_of(const String& x, int y) const{
	int search = size-1;
	int xpos;
	int tmp;
	while(search > y){
		xpos = 0;
		tmp = 0;
		while(xpos < x.sizeOf()){
			if(at(search) == x.at(xpos)){
				tmp++;
			}
			xpos++;
		}
		if(tmp == 0){
			return search;
		}
		search--;
	}
	return -1;
}
int String::find_last_not_of(const char* x, int y) const{
	int search = size-1;
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	int xpos;
	int tmp;
	while(search > y){
		xpos = 0;
		tmp = 0;
		while(xpos < constsize){
			if(at(search) == x[xpos]){
				tmp++;
			}
			xpos++;
		}
		if(tmp == 0){
			return search;
		}
		search--;
	}
	return -1;
}
int String::find_last_not_of(char x, int y) const{
	int search = size-1;
	while(search >= y){
		if(at(search) != x){
			return search;
		}else{
			search--;
		}
	}
	return -1;
}
// String String::substr(int, int){
// }
// int String::compare(const String&) const{
// }
// int String::compare(const char*) const{
// }
// int String::compare(char) const{
// }






// String::operator+ (string)
// String::relational operators (string)
// String::swap (string)
// String::operator>> (string)
// String::operator<< (string)
// String::getline (string)



void String::print(){
	str.print();
}

#endif



/*
Move Constructor
Move Assignment Operator
The overloaded Assignment Operator
*/