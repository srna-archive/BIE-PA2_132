#include <iostream>

using namespace std;

template<class T>
T* find_array(T* a, int n, T what)
{
	// ...
	return NULL;
}

int main() {
	int a[] = {1,2,3,4,5};
	int * found = find_array(a, sizeof(a), 3);
	cout << "Address of a: 0x" << hex << a << endl;
	cout << "Address of position of 3 in a: 0x" << hex << found << endl;
	return 0;
}

