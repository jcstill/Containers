#include "String.h"

int main(){
	String tmp1;
	
	cout << "tmp1:\n\n";
	
	cout << "isEmpty" << '\n';
	cout << tmp1.isEmpty() << "\n\n";

	cout << "push_back" << '\n';
	for(char i=0; i<6; i++){
		tmp1.push_back(i+65);
	}
	tmp1.print();
	cout << "sizeOf" << '\n';
	cout << tmp1.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp1.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp1.capacityOf() << "\n\n";
	
	cout << "resize larger 8" << '\n';
	tmp1.resize(8);
	tmp1.print();
	cout << "sizeOf" << '\n';
	cout << tmp1.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp1.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp1.capacityOf() << "\n\n";
	
	cout << "resize smaller 4" << '\n';
	tmp1.resize(4);
	tmp1.print();
	cout << "sizeOf" << '\n';
	cout << tmp1.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp1.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp1.capacityOf() << "\n\n";
	
	cout << "reserve larger 10" << '\n';
	tmp1.reserve(10);
	tmp1.print();
	cout << "sizeOf" << '\n';
	cout << tmp1.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp1.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp1.capacityOf() << "\n\n";
	
	cout << "reserve smaller 8" << '\n';
	tmp1.reserve(8);
	tmp1.print();
	cout << "sizeOf" << '\n';
	cout << tmp1.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp1.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp1.capacityOf() << "\n\n";
	
	cout << "reserve smaller 2" << '\n';
	tmp1.reserve(2);
	tmp1.print();
	cout << "sizeOf" << '\n';
	cout << tmp1.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp1.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp1.capacityOf() << "\n\n";
	
	
	cout << "clear" << '\n';
	tmp1.clear();
	tmp1.print();
	cout << "sizeOf" << '\n';
	cout << tmp1.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp1.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp1.capacityOf() << "\n\n";
	
	cout << "push_back" << '\n';
	for(char i=0; i<6; i++){
		tmp1.push_back(i+65);
	}
	tmp1.print();
	cout << '\n';
	
	cout << "at 5" << '\n';
	cout << tmp1.at(5) << "\n\n";
	
	cout << "pop_back" << '\n';
	for(char i=0; i<3; i++){
		cout << "pop " << char(i+48) << '\n';
		tmp1.pop_back();
	}
	tmp1.print();
	cout << "sizeOf" << '\n';
	cout << tmp1.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp1.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp1.capacityOf() << "\n\n";
	
	cout << "tmp2:\n\n";
	String tmp2(5);
	tmp2.print();
	cout << "sizeOf" << '\n';
	cout << tmp2.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp2.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp2.capacityOf() << "\n\n";
	
	cout << "tmp3:\n\n";
	String tmp3(tmp1);
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";
	
	
	tmp1.~String();
	tmp2.~String();
	tmp3.~String();
	return 0;
}