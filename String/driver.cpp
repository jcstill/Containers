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
		tmp1.push_back(i+48);
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
	
	cout << "[1]" << '\n';
	cout << tmp3[1] << "\n\n";

	cout << "at 1" << '\n';
	cout << tmp3.at(1) << "\n\n";

	cout << "back" << '\n';
	cout << tmp3.back() << "\n\n";

	cout << "front" << '\n';
	cout << tmp3.front() << "\n\n";

	cout << "+= tmp1" << '\n';
	tmp3 += tmp1;
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "+= \'Y\'" << '\n';
	tmp3 += 'Y';
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "+= \"YEET\"" << '\n';
	tmp3 += "YEET";
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "append tmp1" << '\n';
	tmp3.append(tmp1);
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "append \'y\'" << '\n';
	tmp3.append('y');
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "append \"yeet\"" << '\n';
	tmp3.append("yeet");
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "assign tmp1" << '\n';
	tmp3.assign(tmp1);
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "assign \'y\'" << '\n';
	tmp3.assign('y');
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "assign \"yeet\"" << '\n';
	tmp3.assign("yeet");
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "insert tmp1 at 1" << '\n';
	tmp3.insert(1, tmp1);
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "insert \'y\' at 2" << '\n';
	tmp3.insert(2,'y');
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "insert \"hello\" at 3" << '\n';
	tmp3.insert(3,"hello");
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "erase 2-4" << '\n';
	tmp3.erase(4, 2);
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "replace 1-3 with tmp1" << '\n';
	tmp3.replace(1, 2, tmp1);
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "replace 1-3 with \'G\'" << '\n';
	tmp3.replace(1, 2, 'G');
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "replace 1-3 with \'GOOFY\'" << '\n';
	tmp3.replace(1, 2, "GOOFY");
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "swap tmp3 and tmp1" << '\n';
	cout << "tmp3:\n";
	tmp3.swap(tmp1);
	tmp3.print();
	cout << "sizeOf tmp3" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length of tmp3" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf tmp3" << '\n';
	cout << tmp3.capacityOf() << "\ntmp1:\n";
	tmp1.print();
	cout << "sizeOf tmp1" << '\n';
	cout << tmp1.sizeOf() << "\n";
	cout << "length of tmp1" << '\n';
	cout << tmp1.length() << "\n";
	cout << "capacityOf tmp1" << '\n';
	cout << tmp1.capacityOf() << "\n\n";

	// cout << "c_str of tmp3" << '\n';
	// cout << tmp3.c_str() << "\n\n";


	tmp1.~String();
	tmp2.~String();
	tmp3.~String();
	return 0;
}