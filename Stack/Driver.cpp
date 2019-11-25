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

#include "Stack.h"

int main(){
	Stack<int> TMP;
	
	cout << "isEmpty" << '\n';
	cout << TMP.isEmpty() << "\n\n";
	
	cout << "push" << '\n';
	for(int i=0; i<6; i++){
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

	cout << "top\n" << TMP.top() << "\n\n";
	
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
	TMP.clear(4);
	TMP.print();
	cout << '\n';
	
	cout << "search" << '\n';
	cout << TMP.search(7) << '\n';
	cout << TMP.search(0) << '\n';
	cout << '\n';
	
	cout << "Create new stack 15 long\n";
	Stack<int> TMP2(15);
	TMP2.print();
	cout << '\n';
	
	cout << "Copy Constructor\n";
	Stack<int> TMP3(TMP);
	cout << "TMP3\n";
	TMP3.print();
	cout << '\n';
	cout << "TMP\n";
	TMP.print();
	cout << '\n';
	TMP3.~Stack();
	
	cout << "Overloaded assignment operator\n";
	TMP2 = TMP;
	cout << "TMP2\n";
	TMP2.print();
	cout << '\n';
	cout << "TMP\n";
	TMP.print();
	cout << '\n';
	TMP2.~Stack();
	
	for(int i=0; i<6; i++){
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