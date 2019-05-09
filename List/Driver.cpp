#include "List.h"

int main(){
	List<int> TMP;
	
	cout << "isEmpty" << '\n';
	cout << TMP.isEmpty() << "\n\n";
	
	cout << "push_back" << '\n';
	for(int i=0; i<5; i++){
		TMP.push_back(i);
	}
	TMP.print();
	cout << '\n';
	
	cout << "sizeOf" << '\n';
	cout << TMP.sizeOf() << "\n\n";
	
	cout << "push_front" << '\n';
	TMP.push_front(15);
	TMP.print();
	cout << '\n';
	
	cout << "erase" << '\n';
	TMP.erase(2);
	TMP.print();
	cout << '\n';
	
	cout << "pop_front" << '\n';
	TMP.pop_front();
	TMP.print();
	cout << '\n';
	
	cout << "pop_back" << '\n';
	TMP.pop_back();
	TMP.print();
	cout << '\n';
	
	cout << "insert" << '\n';
	TMP.insert(18, 1);
	TMP.print();
	cout << '\n';
	
	cout << "resize (larger)" << '\n';
	TMP.resize(8);
	TMP.print();
	cout << '\n';
	
	cout << "resize (smaller)" << '\n';
	TMP.resize(6);
	TMP.print();
	cout << '\n';
	
	cout << "swap" << '\n';
	TMP.swap(4, 1);
	TMP.print();
	cout << '\n';
	
	cout << "assign" << '\n';
	TMP.assign(1, 0);
	TMP.assign(2, 1);
	TMP.assign(7, 5);
	TMP.print();
	cout << '\n';
	
	cout << "clear" << '\n';
	TMP.clear(4, 1);
	TMP.print();
	cout << '\n';
	
	cout << "isEmpty" << '\n';
	cout << TMP.isEmpty() << "\n\n";
	
	TMP.push_front(6);
	TMP.push_back(15);
	
	cout << "search" << '\n';
	cout << TMP.search(7) << '\n';
	TMP.print();
	cout << '\n';

	cout << "Front: " << TMP.retFront() << '\n';
	cout << "End: " << TMP.retEnd() << '\n';
	cout << "At 2: " << TMP.retAt(2) << "\n\n";
	
	cout << "Create new list 8 long\n";
	List<int> TMP2(8);
	TMP2.print();
	cout << '\n';
	
	cout << "Copy Constructor\n";
	List<int> TMP3(TMP);
	TMP3.print();
	cout << '\n';
	
	TMP3.~List();
	
	cout << "Overloaded assignment operator:\n";
	TMP2 = TMP;
	TMP2.print();
	cout << '\n';

	return 0;
}


// void reverse();
// const List<T>& operator=(const List<T>&);