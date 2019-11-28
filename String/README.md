# String
String implemented using List.h <char>.

Tested with no known memory leaks or errors.

**This class should be a drop-in replacement for std::string**

## Public Member Functions:
* Note that most functions should perform just as their std::string counterparts

### Constructor
String();

### Destructor
~String();

### Overloaded operators
operator=

operator+=

operator[]

operator>>

operator<<

operator+

operator==

operator!=

operator<

operator<=

operator>

operator>=

swap

getline

### Capacity and sizing functions
sizeOf

length

resize

capacityOf

reserve

clear

isEmpty

shrink_to_fit

### Element access
at

back

front

### Modifiers
append

push_back

assign

insert

erase

replace

swap

pop_back

### String Operations
c_str

data

copy

find

rfind

find_first_of

find_last_of

find_first_not_of

find_last_not_of

substr

compare

### Conversion Functions
to_String

Stoi

Stou

Stol

Stoul

Stoull

Stof

Stod

Stold

### Other
print - Useful for debugging