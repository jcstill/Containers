#ifndef __STRING_H__
#define __STRING_H__
#include <iostream>
#include "../List/List.h"
using namespace std;

class String{
	private:
		int size;																		// Current size of the String
		int capacity;																	// Total capacity of the String
		List<char> str;																	// Actual String stored as a list
		char* array;																	// Used for returning c strings (character arrays)
		// Internal Functions
		void dcopy(const String&);														// Deep copy the String
		void dcopy(const char*);														// Deep copy the String
		void dcopy(char);																// Deep copy the String
	public:
		String();																		// Default Constructor
		String(int);																	// Non-default Constructor
		String(const String&);															// Copy Constructor
		String(const char*);															// Copy Constructor
		String(char);																	// Copy Constructor
		~String();																		// Destructor
		// Overloaded operators
		String& operator=(const String&);												// Replaces this String with String passed in
		String& operator=(const char*);													// Replaces this String with const char* passed in - ei.( "Hello World" )
		String& operator=(char);														// Replaces this String with char passed in - ei.( 'Y' )
		String& operator+=(const String&);												// Append String to end of this String
		String& operator+=(const char*);												// Append const char* to end of this String - ei.( "Hello World" )
		String& operator+=(char);														// Append char to end of this String - ei.( 'Y' )
		char operator[](int) const;														// Return character in String
		friend istream& operator>>(istream&, String&);									// Input stream operator
		friend ostream& operator<<(ostream&, const String&);							// Output stream operator
		friend String operator+(const String&, const String&);							// Concatenate two Strings into String
		friend String operator+(const String&, const char*);							// Concatenate two Strings into String
		friend String operator+(const char*, const String&);							// Concatenate two Strings into String
		friend String operator+(const String&, char);									// Concatenate two Strings into String
		friend String operator+(char, const String&);									// Concatenate two Strings into String
		friend bool operator==(const String&, const String&);							// Equal comparison
		friend bool operator==(const String&, const char*);								// Equal comparison
		friend bool operator==(const char*, const String&);								// Equal comparison
		friend bool operator==(const String&, char);									// Equal comparison
		friend bool operator==(char, const String&);									// Equal comparison
		friend bool operator!=(const String&, const String&);							// Not equal comparison
		friend bool operator!=(const String&, const char*);								// Not equal comparison
		friend bool operator!=(const char*, const String&);								// Not equal comparison
		friend bool operator!=(const String&, char);									// Not equal comparison
		friend bool operator!=(char, const String&);									// Not equal comparison
		friend bool operator<(const String&, const String&);							// Less than comparison
		friend bool operator<(const String&, const char*);								// Less than comparison
		friend bool operator<(const char*, const String&);								// Less than comparison
		friend bool operator<(const String&, char);										// Less than comparison
		friend bool operator<(char, const String&);										// Less than comparison
		friend bool operator<=(const String&, const String&);							// Less than or equal comparison
		friend bool operator<=(const String&, const char*);								// Less than or equal comparison
		friend bool operator<=(const char*, const String&);								// Less than or equal comparison
		friend bool operator<=(const String&, char);									// Less than or equal comparison
		friend bool operator<=(char, const String&);									// Less than or equal comparison
		friend bool operator>(const String&, const String&);							// Greater than comparison
		friend bool operator>(const String&, const char*);								// Greater than comparison
		friend bool operator>(const char*, const String&);								// Greater than comparison
		friend bool operator>(const String&, char);										// Greater than comparison
		friend bool operator>(char, const String&);										// Greater than comparison
		friend bool operator>=(const String&, const String&);							// Greater than or equal comparison
		friend bool operator>=(const String&, const char*);								// Greater than or equal comparison
		friend bool operator>=(const char*, const String&);								// Greater than or equal comparison
		friend bool operator>=(const String&, char);									// Greater than or equal comparison
		friend bool operator>=(char, const String&);									// Greater than or equal comparison
		friend void swap(String&, String&);												// Swaps contents of the two Strings
		friend istream& getline(istream&, String&, char);
		friend istream& getline(istream&, String&);
		// Capacity and sizing functions
		int sizeOf() const;																// Returns size of the String
		int length() const;																// Returns size of the String
		void resize(int);																// Resize String - Can modify String
		void resize(int, char);															// Resize String and fill new spaces with char
		int capacityOf() const;															// Returns the size of allocated storage
		void reserve(int=0);															// Resize String - Can't modify String
		void clear();																	// Clear the String - Resets capacity to 0
		bool isEmpty();																	// Check if String is empty
		void shrink_to_fit();															// Shrink capacity to fit size
		// Element access
		char at(int) const;																// Return character in String
		char back() const;																// Return last character
		char front() const;																// Return first character
		// Modifiers
		String& append(const String&);													// Append String to end of this String
		String& append(const String&, int subin, int sublen);							// Append subString to end of this String
		String& append(const char*);													// Append const char* to end of this String - ei.( "Hello World" )
		String& append(const char*, int);												// Append first n chars of const char* to end of this String - ei.( "Hello World" )
		String& append(char);															// Append char to end of this String - ei.( 'Y' )
		String& append(int, char);														// Append char to end of this String n times - ei.( 'Y' )
		void push_back(const char);														// Append character to String
		String& assign(const String&);													// Replaces this String with String passed in
		String& assign(const String&, int subin, int sublen);							// Replaces this String with subString passed in
		String& assign(const char*);													// Replaces this String with const char* passed in - ei.( "Hello World" )
		String& assign(const char*, int);												// Replaces this String with first n chars of const char* passed in - ei.( "Hello World" )
		String& assign(char);															// Replaces this String with char passed in - ei.( 'Y' )
		String& assign(int, char);														// Replaces this String with char n times - ei.( 'Y' )
		String& insert(int index, const String&);										// Inserts a copy of String into this String
		String& insert(int index, const String&, int subin, int sublen);				// Inserts a copy of subString into this String
		String& insert(int index, const char*);											// Inserts a copy of const char* into this String - ei.( "Hello World" )
		String& insert(int index, const char*, int);									// Inserts a copy of first n chars of const char* into this String - ei.( "Hello World" )
		String& insert(int index, char);												// Inserts a copy of char into this String - ei.( 'Y' )
		String& insert(int index, int, char);											// Inserts a copy of char into this String n times - ei.( 'Y' )
		void erase(int index=0, int length=-1);											// Erase portion of this String ()
		String& replace(int index, int length, const String&);							// Replace portion of this String with String
		String& replace(int index, int length, const String&, int subin, int sublen);	// Replace portion of this String with subString
		String& replace(int index, int length, const char*);							// Replace portion of this String with const char* - ei.( "Hello World" )
		String& replace(int index, int length, const char*, int);						// Replace portion of this String with first n chars of const char* - ei.( "Hello World" )
		String& replace(int index, int length, char);									// Replace portion of this String with char - ei.( 'Y' )
		String& replace(int index, int length, int, char);								// Replace portion of this String with char n times - ei.( 'Y' )
		void swap(String&);																// Swaps contents of this String with String
		void pop_back();																// Delete last character
		// String Operations
		const char* c_str();															// Return pointer to char array of String
		const char* data();																// Return pointer to char array of String
		int copy(char*, int length, int index=0) const;									// Copy portion of this String to a char array
		int find(const String&, int index=0) const;										// Search this String for the first occurrence of String starting at a position
		int find(const char*, int index=0) const;										// Search this String for the first occurrence of const char* starting at a position - ei.( "Hello World" )
		int find(char, int index=0) const;												// Search this String for the first occurrence of char starting at a position - ei.( 'Y' )
		int rfind(const String&, int index=0) const;									// Search this String for the last occurrence of String starting at a position
		int rfind(const char*, int index=0) const;										// Search this String for the last occurrence of const char* starting at a position - ei.( "Hello World" )
		int rfind(char, int index=0) const;												// Search this String for the last occurrence of char starting at a position - ei.( 'Y' )
		int find_first_of(const String&, int index=0) const;							// Search this String for the first character that matches any of the charaters in String starting at a position
		int find_first_of(const char*, int index=0) const;								// Search this String for the first character that matches any of the charaters in const char* starting at a position - ei.( "Hello World" )
		int find_first_of(char, int index=0) const;										// Search this String for the first character that matches char starting at a position - ei.( 'Y' )
		int find_last_of(const String&, int index=0) const;								// Search this String for the last character that matches any of the charaters in String starting at a position
		int find_last_of(const char*, int index=0) const;								// Search this String for the last character that matches any of the charaters in const char* starting at a position - ei.( "Hello World" )
		int find_last_of(char, int index=0) const;										// Search this String for the last character that matches char starting at a position - ei.( 'Y' )
		int find_first_not_of(const String&, int index=0) const;						// Search this String for the first character that does not match any of the charaters in String starting at a position
		int find_first_not_of(const char*, int index=0) const;							// Search this String for the first character that does not match any of the charaters in const char* starting at a position - ei.( "Hello World" )
		int find_first_not_of(char, int index=0) const;									// Search this String for the first character that does not char starting at a position - ei.( 'Y' )
		int find_last_not_of(const String&, int index=0)const;							// Search this String for the last character that does not match any of the charaters in String starting at a position
		int find_last_not_of(const char*, int index=0) const;							// Search this String for the last character that does not match any of the charaters in const char* starting at a position - ei.( "Hello World" )
		int find_last_not_of(char, int index=0) const;									// Search this String for the last character that does not char starting at a position - ei.( 'Y' )
		String substr(int index=0, int length=-1) const;								// Return a new String object that is a substring copy of this String
		int compare(const String&) const;												// Compare this String to String
		int compare(int index, int length, const String&) const;						// Compare this subString to String
		int compare(int index, int length, const String&, int subin, int sublen) const;	// Compare this subString to subString
		int compare(const char*) const;													// Compare this String to const char* - ei.( "Hello World" )
		int compare(int index, int length, const char*) const;							// Compare this subString to const char* - ei.( "Hello World" )
		// int compare(int index, int length, const char*, int sublen) const;				// Compare this subString to const char* buffer - ei.( "Hello World" )
		int compare(char) const;														// Compare this String to char - ei.( 'Y' )
																							// 0	They are equal
																							// <0	Value of the first character that doesn't match is lower in the compared string, or all compared characters match but the compared string is shorter.
																							// >0	Value of the first character that doesn't match is higher in the compared string, or all compared characters match but the compared string is longer.
		// Conversion Functions
		friend String to_String(int x);													// Convert int to String
		friend String to_String(long x);												// Convert unsigned int to String
		friend String to_String(long long x);											// Convert long to String
		friend String to_String(unsigned int x);										// Convert long long to String
		friend String to_String(unsigned long x);										// Convert unsigned long to String
		friend String to_String(unsigned long long x);									// Convert unsigned long long to String
		friend String to_String(float x);												// Convert float to String
		friend String to_String(double x);												// Convert double to String
		friend String to_String(long double x);											// Convert long double to String
		friend int Stoi(const String&, int idx=0, int base=10);							// Convert String to int
		friend unsigned int Stou(const String&, int idx=0, int base=10);				// Convert String to unsigned int
		friend long Stol(const String&, int idx=0, int base=10);						// Convert String to long
		friend long long Stoll(const String&, int idx=0, int base=10);					// Convert String to long long
		friend unsigned long Stoul(const String&, int idx=0, int base=10);				// Convert String to unsigned long
		friend unsigned long long Stoull(const String&, int idx=0, int base=10);		// Convert String to unsigned long long
		friend float Stof(const String&, int idx=0, int base=10);						// Convert String to float
		friend double Stod(const String&, int idx=0, int base=10);						// Convert String to double
		friend long double Stold(const String&, int idx=0, int base=10);				// Convert String to long double
		// Debugging
		void print();																	// Print the entire String - For debugging only
};

String::String(){
	List<char> str;
	size = 0;
	capacity = 0;
	array = nullptr;
}
String::String(int x){
	List<char> str(x);
	size = 0;
	capacity = x;
	array = nullptr;
}
String::String(const String& x){
	List<char> str;
	size = 0;
	capacity = 0;
	array = nullptr;
	dcopy(x);
}
String::String(const char* x){
	List<char> str;
	size = 0;
	capacity = 0;
	array = nullptr;
	dcopy(x);
}
String::String(char x){
	List<char> str;
	size = 0;
	capacity = 0;
	array = nullptr;
	dcopy(x);
}
String::~String(){
	str.~List();
	size = 0;
	capacity = 0;
	if(array != nullptr){
		delete [] array;
	}
}
// Internal Functions
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
istream& operator>>(istream& is, String& x){
	char tmp;
	x.clear();
	is.clear();
	while(is.get(tmp)){
		if(tmp != '\n' && tmp != ' '){
			x.append(tmp);
		}else{
			break;
		}
	}
	// is.ignore(10000);					// std doesn't ignore the input buffer
	return is;
}
ostream& operator<<(ostream& os, const String& x){
	for(int i=0; i<x.sizeOf(); i++){
		os << x.at(i);
	}
	os << '\0';
	return os;
}
String operator+(const String& lhs, const String& rhs){
	String tmp(lhs);
	tmp.append(rhs);
	return tmp;
}
String operator+(const String& lhs, const char* rhs){
	String tmp(lhs);
	tmp.append(rhs);
	return tmp;
}
String operator+(const char* lhs, const String& rhs){
	String tmp(lhs);
	tmp.append(rhs);
	return tmp;
}
String operator+(const String& lhs, char rhs){
	String tmp(lhs);
	tmp.append(rhs);
	return tmp;
}
String operator+(char lhs, const String& rhs){
	String tmp(lhs);
	tmp.append(rhs);
	return tmp;
}
bool operator==(const String& lhs, const String& rhs){
	if(lhs.compare(rhs) == 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator==(const String& lhs, const char* rhs){
	if(lhs.compare(rhs) == 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator==(const char* lhs, const String& rhs){
	if(rhs.compare(lhs) == 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator==(const String& lhs, char rhs){
	if(lhs.compare(rhs) == 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator==(char lhs, const String& rhs){
	if(rhs.compare(lhs) == 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator!=(const String& lhs, const String& rhs){
	if(lhs.compare(rhs) != 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator!=(const String& lhs, const char* rhs){
	if(lhs.compare(rhs) != 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator!=(const char* lhs, const String& rhs){
	if(rhs.compare(lhs) != 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator!=(const String& lhs, char rhs){
	if(lhs.compare(rhs) != 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator!=(char lhs, const String& rhs){
	if(rhs.compare(lhs) != 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator<(const String& lhs, const String& rhs){
	if(lhs.compare(rhs) > 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator<(const String& lhs, const char* rhs){
	if(lhs.compare(rhs) > 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator<(const char* lhs, const String& rhs){
	if(rhs.compare(lhs) > 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator<(const String& lhs, char rhs){
	if(lhs.compare(rhs) > 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator<(char lhs, const String& rhs){
	if(rhs.compare(lhs) > 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator<=(const String& lhs, const String& rhs){
	return (lhs < rhs) || (lhs == rhs);
}
bool operator<=(const String& lhs, const char* rhs){
	return (lhs < rhs) || (lhs == rhs);
}
bool operator<=(const char* lhs, const String& rhs){
	return (lhs < rhs) || (lhs == rhs);
}
bool operator<=(const String& lhs, char rhs){
	return (lhs < rhs) || (lhs == rhs);
}
bool operator<=(char lhs, const String& rhs){
	return (lhs < rhs) || (lhs == rhs);
}
bool operator>(const String& lhs, const String& rhs){
	if(lhs.compare(rhs) < 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator>(const String& lhs, const char* rhs){
	if(lhs.compare(rhs) < 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator>(const char* lhs, const String& rhs){
	if(rhs.compare(lhs) > 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator>(const String& lhs, char rhs){
	if(lhs.compare(rhs) < 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator>(char lhs, const String& rhs){
	if(rhs.compare(lhs) > 0){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
bool operator>=(const String& lhs, const String& rhs){
	return (lhs > rhs) || (lhs == rhs);
}
bool operator>=(const String& lhs, const char* rhs){
	return (lhs > rhs) || (lhs == rhs);
}
bool operator>=(const char* lhs, const String& rhs){
	return (lhs > rhs) || (lhs == rhs);
}
bool operator>=(const String& lhs, char rhs){
	return (lhs > rhs) || (lhs == rhs);
}
bool operator>=(char lhs, const String& rhs){
	return (lhs > rhs) || (lhs == rhs);
}
void swap(String& x, String& y){
	x.swap(y);
}
istream& getline(istream& is, String& x, char delim){
	char tmp;
	x.clear();
	is.clear();
	while(is.get(tmp)){
		if(tmp != delim){
			x.append(tmp);
		}else{
			break;
		}
	}
	// is.ignore(10000);					// std doesn't ignore the input buffer
	return is;
}
istream& getline(istream& is, String& x){
	char tmp;
	x.clear();
	is.clear();
	while(is.get(tmp)){
		if(tmp != '\n'){
			x.append(tmp);
		}else{
			break;
		}
	}
	// is.ignore(10000);					// std doesn't ignore the input buffer
	return is;
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
void String::resize(int x, char y){
	if(x > size){
		for(int i=size-x; i<0; i++){
			str.push_back(y);
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
	if(x >= 0 && x < size){
		return str.retAt(x);
	}
	return 0;
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
String& String::append(const String& x, int subin, int sublen){
	for(int i=subin; i<sublen; i++){
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
String& String::append(const char* x, int size){
	for(int i=0; i<size; i++){
		if(x[i] == '\0'){
			return *this;
		}
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
String& String::append(int n, char x){
	for(int i=0; i<n; i++){
		str.push_back(x);
		size++;
		capacity++;
	}
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
String& String::assign(const String& x, int subin, int sublen){
	clear();
	for(int i=subin; i<sublen; i++){
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
String& String::assign(const char* x, int size){
	clear();
	for(int i=0; i<size; i++){
		if(x[i] == '\0'){
			return *this;
		}
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
String& String::assign(int n, char x){
	clear();
	for(int i=0; i<n; i++){
		str.push_back(x);
		size++;
		capacity++;
	}
	return *this;
}
String& String::insert(int index, const String& x){
	for(int i=x.sizeOf()-1; i>=0; i--){
		str.insert(x.at(i), index);
		size++;
		capacity++;
	}
	return *this;
}
String& String::insert(int index, const String& x, int subin, int sublen){
	for(int i=sublen-1; i>=subin; i--){
		str.insert(x.at(i), index);
		size++;
		capacity++;
	}
	return *this;
}
String& String::insert(int index, const char* x){
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	for(int i=constsize-1; i>=0; i--){
		str.insert(x[i], index);
		size++;
		capacity++;
	}
	return *this;
}
String& String::insert(int index, const char* x, int size){
	for(int i=size-1; i>=0; i--){
		if(x[i] == '\0'){
			return *this;
		}
		str.insert(x[i], index);
		size++;
		capacity++;
	}
	return *this;
}
String& String::insert(int index, char x){
	str.insert(x, index);
	size++;
	capacity++;
	return *this;
}
String& String::insert(int index, int n, char x){
	for(int i=0; i<n; i++){
		str.insert(x, index);
		size++;
		capacity++;
	}
	return *this;
}
void String::String::erase(int index, int length){
	if(length == -1){
		length=size;
	}
	int tmp = 0;
	if(index > length){
		tmp = index;
		index = length;
		length = tmp;
	}
	str.clear(index, length);
	tmp = length - index +1;
	size -= tmp;
	capacity -= tmp;

}
String& String::replace(int index, int length, const String& x){
	erase(index, index+length);
	insert(index, x);
	return *this;
}
String& String::replace(int index, int length, const String& x, int subin, int sublen){
	erase(index, index+length);
	insert(index, x, subin, sublen);
	return *this;
}
String& String::replace(int index, int length, const char* x){
	erase(index, index+length);
	insert(index, x);
	return *this;
}
String& String::replace(int index, int length, const char* x, int size){
	erase(index, index+length);
	insert(index, x, size);
	return *this;
}
String& String::replace(int index, int length, char x){
	erase(index, index+length);
	insert(index, x);
	return *this;
}
String& String::replace(int index, int length, int n, char x){
	erase(index, index+length);
	insert(index, n, x);
	return *this;
}
void String::swap(String& x){
	String tmp(x);
	x.assign(*this);
	assign(tmp);
	tmp.~String();
}
// String Operations
const char* String::c_str(){
	if(array != nullptr){
		delete [] array;
	}
	array = new char[size+1];
	for(int i=0; i<size; i++){
		array[i] = at(i);
	}
	array[size] = '\0';
	return array;
}
const char* String::data(){
	if(array != nullptr){
		delete [] array;
	}
	array = new char[size+1];
	for(int i=0; i<size; i++){
		array[i] = at(i);
	}
	array[size] = '\0';
	return array;
}
int String::copy(char* x, int length, int index) const{
	int constsize = 0;
	for(int i=index; i<index+length; i++){
		x[i-index] = at(i);
		constsize++;
	}
	return constsize;
}
int String::find(const String& x, int index) const{
	int xpos = 0;
	while(index < size){
		if(at(index) == x.at(xpos)){
			xpos++;
		}else if(at(index) == x.at(xpos-1)){
			xpos=1;
		}else{
			xpos=0;
		}
		if(xpos == x.sizeOf()){
			return index-xpos+1;
		}
		index++;
	}
	return -1;
}
int String::find(const char* x, int index) const{
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	int xpos = 0;
	while(index < size){
		if(at(index) == x[xpos]){
			xpos++;
		}else if(at(index) == x[xpos-1]){
			xpos=1;
		}else{
			xpos=0;
		}
		if(xpos == constsize){
			return index-xpos+1;
		}
		index++;
	}
	return -1;
}
int String::find(char x, int index) const{
	while(index < size){
		if(at(index) == x){
			return index;
		}else{
			index++;
		}
	}
	return -1;
}
int String::rfind(const String& x, int index) const{
	int search = size-1;
	int xpos = x.sizeOf()-1;
	while(search >= index){
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
int String::rfind(const char* x, int index) const{
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	int search = size-1;
	int xpos = constsize-1;
	while(search >= index){
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
int String::rfind(char x, int index) const{
	int search = size-1;
	while(search >= index){
		if(at(search) == x){
			return search;
		}else{
			search--;
		}
	}
	return -1;
}
int String::find_first_of(const String& x, int index) const{
	int xpos;
	while(index < size){
		xpos = 0;
		while(xpos < x.sizeOf()){
			if(at(index) == x.at(xpos)){
				return index;
			}
			xpos++;
		}
		index++;
	}
	return -1;
}
int String::find_first_of(const char* x, int index) const{
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	int xpos;
	while(index < size){
		xpos = 0;
		while(xpos < constsize){
			if(at(index) == x[xpos]){
				return index;
			}
			xpos++;
		}
		index++;
	}
	return -1;
}
int String::find_first_of(char x, int index) const{
	while(index < size){
		if(at(index) == x){
			return index;
		}else{
			index++;
		}
	}
	return -1;
}
int String::find_last_of(const String& x, int index) const{
	int search = size-1;
	int xpos;
	while(search > index){
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
int String::find_last_of(const char* x, int index) const{
	int search = size-1;
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	int xpos;
	while(search > index){
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
int String::find_last_of(char x, int index) const{
	int search = size-1;
	while(search >= index){
		if(at(search) == x){
			return search;
		}else{
			search--;
		}
	}
	return -1;
}
int String::find_first_not_of(const String& x, int index) const{
	int xpos;
	int tmp;
	while(index < size){
		xpos = 0;
		tmp = 0;
		while(xpos < x.sizeOf()){
			if(at(index) == x.at(xpos)){
				tmp++;
			}
			xpos++;
		}
		if(tmp == 0){
			return index;
		}
		index++;
	}
	return -1;
}
int String::find_first_not_of(const char* x, int index) const{
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	int xpos;
	int tmp;
	while(index < size){
		xpos = 0;
		tmp = 0;
		while(xpos < constsize){
			if(at(index) == x[xpos]){
				tmp++;
			}
			xpos++;
		}
		if(tmp == 0){
			return index;
		}
		index++;
	}
	return -1;
}
int String::find_first_not_of(char x, int index) const{
	while(index < size){
		if(at(index) != x){
			return index;
		}else{
			index++;
		}
	}
	return -1;
}
int String::find_last_not_of(const String& x, int index) const{
	int search = size-1;
	int xpos;
	int tmp;
	while(search > index){
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
int String::find_last_not_of(const char* x, int index) const{
	int search = size-1;
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	int xpos;
	int tmp;
	while(search > index){
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
int String::find_last_not_of(char x, int index) const{
	int search = size-1;
	while(search >= index){
		if(at(search) != x){
			return search;
		}else{
			search--;
		}
	}
	return -1;
}
String String::substr(int index, int length) const{
	String tmp;
	if(length == -1){
		length=size;
	}
	for(int i=index; i<index+length; i++){
		tmp.append(at(i));
	}
	return tmp;
}
int String::compare(const String& x) const{
	int tmp = 0;
	int loop;
	if(size > x.sizeOf()){
		loop = size;
	}else{
		loop = x.sizeOf();
	}
	for(int i=0; i<loop; i++){
		if(at(i) == x.at(i)){
			tmp++;
		}else if(at(i) < x.at(i)){	
			return 1;
		}else if(at(i) > x.at(i)){	
			return -1;
		}
	}
	if(tmp == size){
		return 0;
	}
	return 255;
}
int String::compare(int index, int length, const String& x) const{
	int tmp = 0;
	for(int i=0; i<length; i++){
		if(at(i+index) == x.at(i)){
			tmp++;
		}else if(at(i+index) < x.at(i)){	
			return 1;
		}else if(at(i+index) > x.at(i)){	
			return -1;
		}
	}
	if(tmp == length){
		return 0;
	}
	return 255;
}
int String::compare(int index, int length, const String& x, int subin, int sublen) const{
	int tmp = 0;
	for(int i=0; i<length; i++){
		if(at(i+index) == x.at(i+subin)){
			tmp++;
		}else if(at(i+index) < x.at(i+subin)){	
			return 1;
		}else if(at(i+index) > x.at(i+subin)){	
			return -1;
		}
	}
	if(tmp == length){
		return 0;
	}
	return 255;
}
int String::compare(const char* x) const{
	int tmp = 0;
	int loop;
	int constsize = 0;
	while(x[constsize] != '\0'){
		constsize++;
	}
	if(size > constsize){
		loop = size;
	}else{
		loop = constsize;
	}
	for(int i=0; i<loop; i++){
		if(at(i) == x[i]){
			tmp++;
		}else if(at(i) < x[i]){	
			return 1;
		}else if(at(i) > x[i]){	
			return -1;
		}
	}
	if(tmp == size){
		return 0;
	}
	return 255;
}
int String::compare(int index, int length, const char* x) const{
	int tmp = 0;
	for(int i=0; i<length; i++){
		if(at(i+index) == x[i]){
			tmp++;
		}else if(at(i+index) < x[i]){	
			return 1;
		}else if(at(i+index) > x[i]){	
			return -1;
		}
	}
	if(tmp == length){
		return 0;
	}
	return 255;
}
// int String::compare(int index, int length, const char* x, int sublen) const{
// 	int tmp = 0;
// 	for(int i=0; i<length; i++){
// 		if(at(i+index) == x[i]){
// 			tmp++;
// 		}else if(at(i+index) < x[i]){	
// 			return 1;
// 		}else if(at(i+index) > x[i]){	
// 			return -1;
// 		}
// 	}
// 	if(tmp == length){
// 		return 0;
// 	}
// 	return 255;
// }
int String::compare(char x) const{
	if(at(0) == x){
		return 0;
	}else if(at(0) < x){	
		return 1;
	}else if(at(0) > x){	
		return -1;
	}
	return 255;
}
// Conversion Functions
String to_String(int x){
	String t;
	int count = 0;
	int tmp = x;
	while(tmp>0){
		tmp/=10;
		count++;
	}
	for(int i=count; i>=1; i--){
		int result = 1;
		for (int w=1; w<=i; w++){
			result = result*10;
		}
		t.append(((x % result) - (x % (result/10))) / (result/10)+48);
	}
	return t;
}
String to_String(long x){
	String t;
	int count = 0;
	int tmp = x;
	while(tmp>0){
		tmp/=10;
		count++;
	}
	for(int i=count; i>=1; i--){
		int result = 1;
		for (int w=1; w<=i; w++){
			result = result*10;
		}
		t.append(((x % result) - (x % (result/10))) / (result/10)+48);
	}
	return t;
}
String to_String(long long x){
	String t;
	int count = 0;
	int tmp = x;
	while(tmp>0){
		tmp/=10;
		count++;
	}
	for(int i=count; i>=1; i--){
		int result = 1;
		for (int w=1; w<=i; w++){
			result = result*10;
		}
		t.append(((x % result) - (x % (result/10))) / (result/10)+48);
	}
	return t;
}
String to_String(unsigned int x){
	String t;
	int count = 0;
	int tmp = x;
	while(tmp>0){
		tmp/=10;
		count++;
	}
	for(int i=count; i>=1; i--){
		int result = 1;
		for (int w=1; w<=i; w++){
			result = result*10;
		}
		t.append(((x % result) - (x % (result/10))) / (result/10)+48);
	}
	return t;
}
String to_String(unsigned long x){
	String t;
	int count = 0;
	int tmp = x;
	while(tmp>0){
		tmp/=10;
		count++;
	}
	for(int i=count; i>=1; i--){
		int result = 1;
		for (int w=1; w<=i; w++){
			result = result*10;
		}
		t.append(((x % result) - (x % (result/10))) / (result/10)+48);
	}
	return t;
}
String to_String(unsigned long long x){
	String t;
	int count = 0;
	int tmp = x;
	while(tmp>0){
		tmp/=10;
		count++;
	}
	for(int i=count; i>=1; i--){
		int result = 1;
		for (int w=1; w<=i; w++){
			result = result*10;
		}
		t.append(((x % result) - (x % (result/10))) / (result/10)+48);
	}
	return t;
}
String to_String(float x){
	String t;
	int count = 0;
	int tmp = x;
	while(tmp>0){
		tmp/=10;
		count++;
	}
	for(int i=count; i>=1; i--){
		int result = 1;
		for (int w=1; w<=i; w++){
			result = result*10;
		}
		t.append(((int(x) % result) - (int(x) % (result/10))) / (result/10)+48);
	}
	float fmp = x - int(x);
	if(fmp > 0){
		fmp = x - int(x);
		t.append('.');
		while(fmp != 0){
			fmp = fmp*10;
			t.append(int(fmp)+48);
			fmp = fmp-int(fmp);
		}
	}else if(fmp < 0){
		t.clear();
		t.append("GENERAL ERROR");
	}
	return t;
}
String to_String(double x){
	String t;
	int count = 0;
	int tmp = x;
	while(tmp>0){
		tmp/=10;
		count++;
	}
	for(int i=count; i>=1; i--){
		int result = 1;
		for (int w=1; w<=i; w++){
			result = result*10;
		}
		t.append(((int(x) % result) - (int(x) % (result/10))) / (result/10)+48);
	}
	double fmp = x - int(x);
	if(fmp > 0){
		fmp = x - int(x);
		t.append('.');
		while(fmp != 0){
			fmp = fmp*10;
			t.append(int(fmp)+48);
			fmp = fmp-int(fmp);
		}
	}else if(fmp < 0){
		t.clear();
		t.append("GENERAL ERROR");
	}
	return t;
}
String to_String(long double x){
	String t;
	int count = 0;
	int tmp = x;
	while(tmp>0){
		tmp/=10;
		count++;
	}
	for(int i=count; i>=1; i--){
		int result = 1;
		for (int w=1; w<=i; w++){
			result = result*10;
		}
		t.append(((int(x) % result) - (int(x) % (result/10))) / (result/10)+48);
	}
	long double fmp = x - int(x);
	if(fmp > 0){
		fmp = x - int(x);
		t.append('.');
		while(fmp != 0){
			fmp = fmp*10;
			t.append(int(fmp)+48);
			fmp = fmp-int(fmp);
		}
	}else if(fmp < 0){
		t.clear();
		t.append("GENERAL ERROR");
	}
	return t;
}
int Stoi(const String& x, int idx, int base){
	String convert;
	for(int i=0; i<x.sizeOf(); i++){
		if(x.at(i) == '0' || x.at(i) == '1' || x.at(i) == '2' || x.at(i) == '3' || x.at(i) == '4' || x.at(i) == '5' || x.at(i) == '6' || x.at(i) == '7' || x.at(i) == '8' || x.at(i) == '9'){
			convert.append(x.at(i));
		}else{
			break;
		}
	}
	int tmp = 0;
	int power = 0;
	for(int i=0; i<convert.sizeOf(); i++){
		power = convert.sizeOf()-i-1;
		int result = 1;
		for (int w=1; w<=power; w++){
			result = result*10;
		}
		tmp = tmp + ((convert.at(i)-48) * result);
	}
	return tmp;
}
unsigned int Stou(const String& x, int idx, int base){
	String convert;
	for(int i=0; i<x.sizeOf(); i++){
		if(x.at(i) == '0' || x.at(i) == '1' || x.at(i) == '2' || x.at(i) == '3' || x.at(i) == '4' || x.at(i) == '5' || x.at(i) == '6' || x.at(i) == '7' || x.at(i) == '8' || x.at(i) == '9'){
			convert.append(x.at(i));
		}else{
			break;
		}
	}
	unsigned int tmp = 0;
	int power = 0;
	for(int i=0; i<convert.sizeOf(); i++){
		power = convert.sizeOf()-i-1;
		int result = 1;
		for (int w=1; w<=power; w++){
			result = result*10;
		}
		tmp = tmp + ((convert.at(i)-48) * result);
	}
	return tmp;
}
long Stol(const String& x, int idx, int base){
	String convert;
	for(int i=0; i<x.sizeOf(); i++){
		if(x.at(i) == '0' || x.at(i) == '1' || x.at(i) == '2' || x.at(i) == '3' || x.at(i) == '4' || x.at(i) == '5' || x.at(i) == '6' || x.at(i) == '7' || x.at(i) == '8' || x.at(i) == '9'){
			convert.append(x.at(i));
		}else{
			break;
		}
	}
	long tmp = 0;
	int power = 0;
	for(int i=0; i<convert.sizeOf(); i++){
		power = convert.sizeOf()-i-1;
		int result = 1;
		for (int w=1; w<=power; w++){
			result = result*10;
		}
		tmp = tmp + ((convert.at(i)-48) * result);
	}
	return tmp;
}
long long Stoll(const String& x, int idx, int base){
	String convert;
	for(int i=0; i<x.sizeOf(); i++){
		if(x.at(i) == '0' || x.at(i) == '1' || x.at(i) == '2' || x.at(i) == '3' || x.at(i) == '4' || x.at(i) == '5' || x.at(i) == '6' || x.at(i) == '7' || x.at(i) == '8' || x.at(i) == '9'){
			convert.append(x.at(i));
		}else{
			break;
		}
	}
	long long tmp = 0;
	int power = 0;
	for(int i=0; i<convert.sizeOf(); i++){
		power = convert.sizeOf()-i-1;
		int result = 1;
		for (int w=1; w<=power; w++){
			result = result*10;
		}
		tmp = tmp + ((convert.at(i)-48) * result);
	}
	return tmp;
}
unsigned long Stoul(const String& x, int idx, int base){
	String convert;
	for(int i=0; i<x.sizeOf(); i++){
		if(x.at(i) == '0' || x.at(i) == '1' || x.at(i) == '2' || x.at(i) == '3' || x.at(i) == '4' || x.at(i) == '5' || x.at(i) == '6' || x.at(i) == '7' || x.at(i) == '8' || x.at(i) == '9'){
			convert.append(x.at(i));
		}else{
			break;
		}
	}
	unsigned long tmp = 0;
	int power = 0;
	for(int i=0; i<convert.sizeOf(); i++){
		power = convert.sizeOf()-i-1;
		int result = 1;
		for (int w=1; w<=power; w++){
			result = result*10;
		}
		tmp = tmp + ((convert.at(i)-48) * result);
	}
	return tmp;
}
unsigned long long Stoull(const String& x, int idx, int base){
	String convert;
	for(int i=0; i<x.sizeOf(); i++){
		if(x.at(i) == '0' || x.at(i) == '1' || x.at(i) == '2' || x.at(i) == '3' || x.at(i) == '4' || x.at(i) == '5' || x.at(i) == '6' || x.at(i) == '7' || x.at(i) == '8' || x.at(i) == '9'){
			convert.append(x.at(i));
		}else{
			break;
		}
	}
	unsigned long long tmp = 0;
	int power = 0;
	for(int i=0; i<convert.sizeOf(); i++){
		power = convert.sizeOf()-i-1;
		int result = 1;
		for (int w=1; w<=power; w++){
			result = result*10;
		}
		tmp = tmp + ((convert.at(i)-48) * result);
	}
	return tmp;
}
float Stof(const String& x, int idx, int base){
	String convert;
	bool decimal = false;
	for(int i=0; i<x.sizeOf(); i++){
		if(x.at(i) == '0' || x.at(i) == '1' || x.at(i) == '2' || x.at(i) == '3' || x.at(i) == '4' || x.at(i) == '5' || x.at(i) == '6' || x.at(i) == '7' || x.at(i) == '8' || x.at(i) == '9'){
			convert.append(x.at(i));
		}else if(x.at(i) == '.'){
			decimal = true;
			convert.append(x.at(i));
		}else{
			break;
		}
	}
	float tmp = 0;
	float tmp2 = 0;
	int power = 0;
	if(decimal){
		int index = 0;
		while(convert.at(index) != '.'){
			index++;
		}
		for(int i=0; i<index; i++){
			power = index-i-1;
			int result = 1;
			for (int w=1; w<=power; w++){
				result = result*10;
			}
			tmp = tmp + ((convert.at(i)-48) * result);
		}
		int count = index;
		int power2 = 0;
		while(convert.at(index) != '\0'){
			index++;
		}
		for(int i=count+1; i<convert.sizeOf(); i++){
			power2++;
			power = index-i-1;
			int result = 1;
			for (int w=1; w<=power; w++){
				result = result*10;
			}
			tmp2 = tmp2 + ((convert.at(i)-48) * result);
		}
		int result = 1;
		for (int w=1; w<=power2; w++){
			result = result*10;
		}
		tmp2 /= result;
		tmp += tmp2;
	}else{
		for(int i=0; i<convert.sizeOf(); i++){
			power = convert.sizeOf()-i-1;
			int result = 1;
			for (int w=1; w<=power; w++){
				result = result*10;
			}
			tmp = tmp + ((convert.at(i)-48) * result);
		}
	}
	return tmp;
}
double Stod(const String& x, int idx, int base){
	String convert;
	bool decimal = false;
	for(int i=0; i<x.sizeOf(); i++){
		if(x.at(i) == '0' || x.at(i) == '1' || x.at(i) == '2' || x.at(i) == '3' || x.at(i) == '4' || x.at(i) == '5' || x.at(i) == '6' || x.at(i) == '7' || x.at(i) == '8' || x.at(i) == '9'){
			convert.append(x.at(i));
		}else if(x.at(i) == '.'){
			decimal = true;
			convert.append(x.at(i));
		}else{
			break;
		}
	}
	double tmp = 0;
	double tmp2 = 0;
	int power = 0;
	if(decimal){
		int index = 0;
		while(convert.at(index) != '.'){
			index++;
		}
		for(int i=0; i<index; i++){
			power = index-i-1;
			int result = 1;
			for (int w=1; w<=power; w++){
				result = result*10;
			}
			tmp = tmp + ((convert.at(i)-48) * result);
		}
		int count = index;
		int power2 = 0;
		while(convert.at(index) != '\0'){
			index++;
		}
		for(int i=count+1; i<convert.sizeOf(); i++){
			power2++;
			power = index-i-1;
			int result = 1;
			for (int w=1; w<=power; w++){
				result = result*10;
			}
			tmp2 = tmp2 + ((convert.at(i)-48) * result);
		}
		int result = 1;
		for (int w=1; w<=power2; w++){
			result = result*10;
		}
		tmp2 /= result;
		tmp += tmp2;
	}else{
		for(int i=0; i<convert.sizeOf(); i++){
			power = convert.sizeOf()-i-1;
			int result = 1;
			for (int w=1; w<=power; w++){
				result = result*10;
			}
			tmp = tmp + ((convert.at(i)-48) * result);
		}
	}
	return tmp;
}
long double Stold(const String& x, int idx, int base){
	String convert;
	bool decimal = false;
	for(int i=0; i<x.sizeOf(); i++){
		if(x.at(i) == '0' || x.at(i) == '1' || x.at(i) == '2' || x.at(i) == '3' || x.at(i) == '4' || x.at(i) == '5' || x.at(i) == '6' || x.at(i) == '7' || x.at(i) == '8' || x.at(i) == '9'){
			convert.append(x.at(i));
		}else if(x.at(i) == '.'){
			decimal = true;
			convert.append(x.at(i));
		}else{
			break;
		}
	}
	long double tmp = 0;
	long double tmp2 = 0;
	int power = 0;
	if(decimal){
		int index = 0;
		while(convert.at(index) != '.'){
			index++;
		}
		for(int i=0; i<index; i++){
			power = index-i-1;
			int result = 1;
			for (int w=1; w<=power; w++){
				result = result*10;
			}
			tmp = tmp + ((convert.at(i)-48) * result);
		}
		int count = index;
		int power2 = 0;
		while(convert.at(index) != '\0'){
			index++;
		}
		for(int i=count+1; i<convert.sizeOf(); i++){
			power2++;
			power = index-i-1;
			int result = 1;
			for (int w=1; w<=power; w++){
				result = result*10;
			}
			tmp2 = tmp2 + ((convert.at(i)-48) * result);
		}
		int result = 1;
		for (int w=1; w<=power2; w++){
			result = result*10;
		}
		tmp2 /= result;
		tmp += tmp2;
	}else{
		for(int i=0; i<convert.sizeOf(); i++){
			power = convert.sizeOf()-i-1;
			int result = 1;
			for (int w=1; w<=power; w++){
				result = result*10;
			}
			tmp = tmp + ((convert.at(i)-48) * result);
		}
	}
	return tmp;
}
// Debugging
void String::print(){
	str.print();
}
#endif



/*
Move Constructor
Move Assignment Operator
The overloaded Assignment Operator
*/