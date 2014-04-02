#include <iostream>
#include "Bag.h"

using namespace std;

int main() {
	Bag b1; 
	b1.insert(1) 
	  .insert(3) 
	  .insert(1) 
	  .insert(2); 
	cout << "b1 = " << b1 << endl; 
	Bag b2 = b1; 
	b1.remove(1); 
	cout << "b1 = " << b1 << endl; 
	cout << "b2 = " << b2 << endl; 
	Bag b3; 
	b3 = b1; 
	b1.remove(1); 
	cout << "b1 = " << b1 << endl; 
	cout << "b3 = " << b3 << endl; 
	cout << "(int)b1 = " << (int)b1 << endl;

	Bag b4(b1);
	cout << "b4 = " << b4 << endl; 
	return 0;
}

