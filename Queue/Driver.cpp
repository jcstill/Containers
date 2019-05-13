#include "Queue.h"

int main(){
	Queue<int> TMP;
	
	cout << "isEmpty" << '\n';
	cout << TMP.isEmpty() << "\n\n";
	
	cout << "push" << '\n';
	for(int i=0; i<5; i++){
		TMP.push(i);
	}
	TMP.print();
	cout << '\n';
	
	cout << "sizeOf" << '\n';
	cout << TMP.sizeOf() << "\n\n";
	
	cout << "pop" << '\n';
	TMP.pop();
	TMP.print();
	cout << '\n';
	
	cout << "swap" << '\n';
	TMP.swap(0, 2);
	TMP.print();
	cout << '\n';
	
	cout << "isEmpty" << '\n';
	cout << TMP.isEmpty() << "\n\n";

	cout << "front\n" << TMP.front() << "\n\n";
	cout << "back\n" << TMP.back() << "\n\n";
	
	cout << "resize (larger)" << '\n';
	TMP.resize(8);
	TMP.print();
	cout << '\n';
	
	cout << "resize (smaller)" << '\n';
	TMP.resize(6);
	TMP.print();
	cout << '\n';
	
	cout << "assign" << '\n';
	TMP.assign(15, 4);
	TMP.assign(32, 5);
	TMP.print();
	cout << '\n';
	
	cout << "clear" << '\n';
	TMP.clear(1);
	TMP.print();
	cout << '\n';
	
	cout << "search" << '\n';
	cout << TMP.search(7) << '\n';
	cout << TMP.search(15) << '\n';
	cout << '\n';
	
	cout << "Create new queue 15 long\n";
	Queue<int> TMP2(15);
	TMP2.print();
	cout << '\n';
	
	cout << "Copy Constructor\n";
	Queue<int> TMP3(TMP);
	cout << "TMP3\n";
	TMP3.print();
	cout << '\n';
	cout << "TMP\n";
	TMP.print();
	cout << '\n';
	TMP3.~Queue();
	
	cout << "Overloaded assignment operator\n";
	TMP2 = TMP;
	cout << "TMP2\n";
	TMP2.print();
	cout << '\n';
	cout << "TMP\n";
	TMP.print();
	cout << '\n';
	TMP2.~Queue();
	
	for(int i=0; i<5; i++){
		TMP.push(i);
	}
	TMP.print();
	cout << '\n';
	
	cout << "reverse" << '\n';
	TMP.reverse();
	TMP.print();
	cout << '\n';
	
	return 0;
}