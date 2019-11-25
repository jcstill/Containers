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

#include "List.h"

int main(){
	List<int> TMP;
	
	cout << "isEmpty" << '\n';
	cout << TMP.isEmpty() << "\n\n";
	
	cout << "push_back" << '\n';
	for(int i=0; i<6; i++){
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
	cout << "At 0: " << TMP.retAt(0) << "\n";
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
	
	for(int i=0; i<6; i++){
		TMP.push_back(i);
	}
	TMP.print();
	cout << '\n';
	
	cout << "reverse" << '\n';
	TMP.reverse();
	TMP.print();
	cout << '\n';

	return 0;
}