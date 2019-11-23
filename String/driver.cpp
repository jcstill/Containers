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

	cout << "at -1" << '\n';
	cout << tmp3.at(-1) << "\n\n";

	cout << "back" << '\n';
	cout << tmp3.back() << "\n\n";

	cout << "front" << '\n';
	cout << tmp3.front() << "\n\n";

	cout << "tmp3 += tmp1" << '\n';
	tmp3 += tmp1;
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "tmp3 += \'Y\'" << '\n';
	tmp3 += 'Y';
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "tmp3 += \"YEET\"" << '\n';
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


	cout << "tmp3 = tmp1" << '\n';
	tmp3 = tmp1;
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "tmp3 = \'y\'" << '\n';
	tmp3 = 'y';
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "tmp3 = \"yeet\"" << '\n';
	tmp3 = "yeet";
	tmp3.print();
	cout << "sizeOf" << '\n';
	cout << tmp3.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp3.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp3.capacityOf() << "\n\n";

	cout << "tmp4 from \'y\':\n";
	String tmp4('y');
	tmp4.print();
	cout << "sizeOf" << '\n';
	cout << tmp4.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp4.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp4.capacityOf() << "\n\n";

	cout << "tmp5 from \"yeet\":\n";
	String tmp5("yeet");
	tmp5.print();
	cout << "sizeOf" << '\n';
	cout << tmp5.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp5.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp5.capacityOf() << "\n\n";

	cout << "c_str of tmp3" << '\n';
	cout << tmp3.c_str() << "\n\n";

	char buff1[10];
	tmp1.print();
	buff1[tmp1.copy(buff1, 5, 1)] = '\0';
	cout << "buff1: " << buff1 << '\n';

	// char buff1[10];
	tmp1.print();
	buff1[tmp1.copy(buff1, 2, 7)] = '\0';
	cout << "buff1: " << buff1 << "\n\n";

	tmp1 = "helloyeetiloyboietii";
	tmp1.print();
	cout << "sizeOf" << '\n';
	cout << tmp1.sizeOf() << "\n";
	cout << "length" << '\n';
	cout << tmp1.length() << "\n";
	cout << "capacityOf" << '\n';
	cout << tmp1.capacityOf() << "\n\n";

	tmp2 = "eti";

	cout << "tmp2 \"eti\" find in tmp1: " << tmp1.find(tmp2, 0) << '\n';
	cout << "\"loy\" find in tmp1: " << tmp1.find("loy", 0) << '\n';
	cout << "\'e\' find in tmp1: " << tmp1.find('e', 0) << "\n\n";

	cout << "tmp2 \"eti\" rfind in tmp1: " << tmp1.rfind(tmp2, 0) << '\n';
	cout << "\"loy\" rfind in tmp1: " << tmp1.rfind("loy", 0) << '\n';
	cout << "\'e\' rfind in tmp1: " << tmp1.rfind('e', 0) << "\n\n";

	cout << "tmp2 \"eti\" find_first_of in tmp1: " << tmp1.find_first_of(tmp2, 0) << '\n';
	cout << "\"bt\" find_first_of in tmp1: " << tmp1.find_first_of("bt", 0) << '\n';
	cout << "\'i\' find_first_of in tmp1: " << tmp1.find_first_of('i', 0) << "\n\n";

	cout << "tmp2 \"eti\" find_last_of in tmp1: " << tmp1.find_last_of(tmp2, 0) << '\n';
	cout << "\"bt\" find_last_of in tmp1: " << tmp1.find_last_of("bt", 0) << '\n';
	cout << "\'o\' find_last_of in tmp1: " << tmp1.find_last_of('o', 0) << "\n\n";

	tmp2 = "ahec";

	cout << "tmp2 \"ahec\" find_first_not_of in tmp1: " << tmp1.find_first_not_of(tmp2, 0) << '\n';
	cout << "\"zfleh\" find_first_not_of in tmp1: " << tmp1.find_first_not_of("zfleh", 0) << '\n';
	cout << "\'a\' find_first_not_of in tmp1: " << tmp1.find_first_not_of('a', 0) << "\n\n";

	cout << "tmp2 \"ahec\" find_last_not_of in tmp1: " << tmp1.find_last_not_of(tmp2, 0) << '\n';
	cout << "\"zftlieh\" find_last_not_of in tmp1: " << tmp1.find_last_not_of("zftlieh", 0) << '\n';
	cout << "\'i\' find_last_not_of in tmp1: " << tmp1.find_last_not_of('i', 0) << "\n\n";

	cout << "data of tmp3" << '\n';
	cout << tmp3.data() << "\n\n";

	// cout << "enter1: ";
	// cin >> tmp5;
	// cin.ignore(10000, '\n');
	// tmp5.print();
	// cout << '\n';
	// cout << tmp5 << "\n\n";

	// cout << "enter2: ";
	// getline(cin, tmp5);
	// tmp5.print();
	// cout << '\n';
	// cout << tmp5 << "\n\n";

	// cout << "enter3: ";
	// getline(cin, tmp5, 'S');
	// tmp5.print();
	// cout << '\n';
	// cout << tmp5 << "\n\n";

	tmp5 = "yetsyu";
	cout << "tmp5 before concat:\n";
	tmp5.print();
	cout << '\n';
	cout << "tmp3 before concat:\n";
	tmp3.print();
	cout << '\n';
	cout << "tmp4 before concat:\n";
	tmp4.print();
	cout << '\n';
	cout << "tmp4 = tmp5 + tmp3\n";
	tmp4 = tmp5 + tmp3;
	tmp4.print();
	cout << '\n';

	cout << "tmp4 = tmp5 + \"hello\"\n";
	tmp4 = tmp5 + "hello";
	tmp4.print();
	cout << '\n';

	cout << "tmp4 = tmp5 + \'5\'\n";
	tmp4 = tmp5 + '5';
	tmp4.print();
	cout << '\n';

	cout << "tmp4 = \"TEST\" + tmp5\n";
	tmp4 = "TEST" + tmp5;
	tmp4.print();
	cout << '\n';

	cout << "tmp4 = \'T\' + tmp5\n";
	tmp4 = 'T' + tmp5;
	tmp4.print();
	cout << '\n';

	tmp5.print();
	cout << '\n';
	cout << "tmp4 = tmp5.substr(2, 3)\n";
	tmp4 = tmp5.substr(2, 3);
	tmp4.print();
	cout << '\n';

	cout << "------------------------------------\n";
	tmp1 = "test";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(tmp2): ";
	cout << tmp1.compare(tmp2) << " (0)\n\n";

	tmp1 = "test";
	tmp2 = "aest";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(tmp2): ";
	cout << tmp1.compare(tmp2) << " (-1)\n\n";

	tmp1 = "test";
	tmp2 = "tes";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(tmp2): ";
	cout << tmp1.compare(tmp2) << " (-1)\n\n";

	tmp1 = "test";
	tmp2 = "zest";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(tmp2): ";
	cout << tmp1.compare(tmp2) << " (1)\n\n";

	tmp1 = "tes";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(tmp2): ";
	cout << tmp1.compare(tmp2) << " (1)\n\n";

	cout << "------------------------------------\n";
	tmp1 = "test";
	tmp1.print();
	cout << "tmp1.compare(\"test\"): ";
	cout << tmp1.compare("test") << " (0)\n\n";

	tmp1 = "test";
	tmp1.print();
	cout << "tmp1.compare(\"aest\"): ";
	cout << tmp1.compare("aest") << " (-1)\n\n";

	tmp1 = "test";
	tmp1.print();
	cout << "tmp1.compare(\"tes\"): ";
	cout << tmp1.compare("tes") << " (-1)\n\n";

	tmp1 = "test";
	tmp1.print();
	cout << "tmp1.compare(\"zest\"): ";
	cout << tmp1.compare("zest") << " (1)\n\n";

	tmp1 = "tes";
	tmp1.print();
	cout << "tmp1.compare(\"test\"): ";
	cout << tmp1.compare("test") << " (1)\n\n";

	cout << "------------------------------------\n";
	tmp1 = "t";
	tmp1.print();
	cout << "tmp1.compare(\'t\'): ";
	cout << tmp1.compare('t') << " (0)\n\n";

	tmp1 = "t";
	tmp1.print();
	cout << "tmp1.compare(\'a\'): ";
	cout << tmp1.compare('a') << " (-1)\n\n";
	
	tmp1 = "test";
	tmp1.print();
	cout << "tmp1.compare(\'t\'): ";
	cout << tmp1.compare('a') << " (-1)\n\n";

	tmp1 = "t";
	tmp1.print();
	cout << "tmp1.compare(\'z\'): ";
	cout << tmp1.compare('z') << " (1)\n\n";

	tmp1 = "test";
	tmp1.print();
	cout << "tmp1.compare(\'t\'): ";
	cout << tmp1.compare('z') << " (1)\n\n";

	cout << "------------------------------------\n";
	tmp1 = "abc test asdf";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(4, 4, tmp2): ";
	cout << tmp1.compare(4, 4, tmp2) << " (0)\n\n";

	tmp1 = "abc test asdf";
	tmp2 = "aest";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(4, 4, tmp2): ";
	cout << tmp1.compare(4, 4, tmp2) << " (-1)\n\n";

	tmp1 = "abc test asdf";
	tmp2 = "tes";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(4, 4, tmp2): ";
	cout << tmp1.compare(4, 4, tmp2) << " (-1)\n\n";

	tmp1 = "abc test asdf";
	tmp2 = "zest";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(4, 4, tmp2): ";
	cout << tmp1.compare(4, 4, tmp2) << " (1)\n\n";

	tmp1 = "abc tes";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(4, 4, tmp2): ";
	cout << tmp1.compare(4, 4, tmp2) << " (1)\n\n";

	cout << "------------------------------------\n";
	tmp1 = "abc test asdf";
	tmp2 = "yeet test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(4, 4, tmp2, 5, 4): ";
	cout << tmp1.compare(4, 4, tmp2, 5, 4) << " (0)\n\n";

	tmp1 = "abc test asdf";
	tmp2 = "yeet aest";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(4, 4, tmp2, 5, 4): ";
	cout << tmp1.compare(4, 4, tmp2, 5, 4) << " (-1)\n\n";

	tmp1 = "abc test asdf";
	tmp2 = "yeet tes";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(4, 4, tmp2, 5, 4): ";
	cout << tmp1.compare(4, 4, tmp2, 5, 4) << " (-1)\n\n";

	tmp1 = "abc test asdf";
	tmp2 = "yeet zest";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(4, 4, tmp2, 5, 4): ";
	cout << tmp1.compare(4, 4, tmp2, 5, 4) << " (1)\n\n";

	tmp1 = "abc tes";
	tmp2 = "yeet test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	cout << "tmp1.compare(4, 4, tmp2, 5, 4): ";
	cout << tmp1.compare(4, 4, tmp2, 5, 4) << " (1)\n\n";

	cout << "------------------------------------\n";
	tmp1 = "abc test asdf";
	tmp1.print();
	cout << "tmp1.compare(4, 4, \"test\"): ";
	cout << tmp1.compare(4, 4, "test") << " (0)\n\n";

	tmp1 = "abc test asdf";
	tmp1.print();
	cout << "tmp1.compare(4, 4, \"aest\"): ";
	cout << tmp1.compare(4, 4, "aest") << " (-1)\n\n";

	tmp1 = "abc test asdf";
	tmp1.print();
	cout << "tmp1.compare(4, 4, \"tes\"): ";
	cout << tmp1.compare(4, 4, "tes") << " (-1)\n\n";

	tmp1 = "abc test asdf";
	tmp1.print();
	cout << "tmp1.compare(4, 4, \"zest\"): ";
	cout << tmp1.compare(4, 4, "zest") << " (1)\n\n";

	tmp1 = "abc tes";
	tmp1.print();
	cout << "tmp1.compare(4, 4, \"test\"): ";
	cout << tmp1.compare(4, 4, "test") << " (1)\n\n";

	cout << "------------------------------------\n";
	tmp1 = "test";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 == tmp2){
		cout << "tmp1 == tmp2\n\n";
	}else{
		cout << "tmp1 and tmp2 are not equal\n\n";
	}

	tmp1 = "yeet";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 == tmp2){
		cout << "tmp1 == tmp2\n\n";
	}else{
		cout << "tmp1 and tmp2 are not equal\n\n";
	}

	cout << "------------------------------------\n";
	tmp1 = "test";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 != tmp2){
		cout << "tmp1 != tmp2\n\n";
	}else{
		cout << "tmp1 and tmp2 are equal\n\n";
	}

	tmp1 = "yeet";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 != tmp2){
		cout << "tmp1 != tmp2\n\n";
	}else{
		cout << "tmp1 and tmp2 are equal\n\n";
	}

	cout << "------------------------------------\n";
	tmp1 = "test";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 < tmp2){
		cout << "tmp1 < tmp2\n\n";
	}else{
		cout << "tmp1 !< tmp2\n\n";
	}

	tmp1 = "alps";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 < tmp2){
		cout << "tmp1 < tmp2\n\n";
	}else{
		cout << "tmp1 !< tmp2\n\n";
	}

	tmp1 = "yeet";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 < tmp2){
		cout << "tmp1 < tmp2\n\n";
	}else{
		cout << "tmp1 !< tmp2\n\n";
	}

	cout << "------------------------------------\n";
	tmp1 = "test";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 <= tmp2){
		cout << "tmp1 <= tmp2\n\n";
	}else{
		cout << "tmp1 !<= tmp2\n\n";
	}

	tmp1 = "alps";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 <= tmp2){
		cout << "tmp1 <= tmp2\n\n";
	}else{
		cout << "tmp1 !<= tmp2\n\n";
	}

	tmp1 = "yeet";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 <= tmp2){
		cout << "tmp1 <= tmp2\n\n";
	}else{
		cout << "tmp1 !<= tmp2\n\n";
	}

	cout << "------------------------------------\n";
	tmp1 = "test";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 > tmp2){
		cout << "tmp1 > tmp2\n\n";
	}else{
		cout << "tmp1 !> tmp2\n\n";
	}

	tmp1 = "alps";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 > tmp2){
		cout << "tmp1 > tmp2\n\n";
	}else{
		cout << "tmp1 !> tmp2\n\n";
	}

	tmp1 = "yeet";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 > tmp2){
		cout << "tmp1 > tmp2\n\n";
	}else{
		cout << "tmp1 !> tmp2\n\n";
	}

	cout << "------------------------------------\n";
	tmp1 = "test";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 >= tmp2){
		cout << "tmp1 >= tmp2\n\n";
	}else{
		cout << "tmp1 !>= tmp2\n\n";
	}

	tmp1 = "alps";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 >= tmp2){
		cout << "tmp1 >= tmp2\n\n";
	}else{
		cout << "tmp1 !>= tmp2\n\n";
	}

	tmp1 = "yeet";
	tmp2 = "test";
	tmp1.print();
	cout << '\n';
	tmp2.print();
	if(tmp1 >= tmp2){
		cout << "tmp1 >= tmp2\n\n";
	}else{
		cout << "tmp1 !>= tmp2\n\n";
	}

	tmp1.~String();
	tmp2.~String();
	tmp3.~String();
	tmp4.~String();
	tmp5.~String();
	return 0;
}