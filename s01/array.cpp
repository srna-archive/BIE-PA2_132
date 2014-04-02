#include <iostream>
#include <cstdlib>

#include "functions.h"

using namespace std;

int main() {
	int len = 0;
	int *array = NULL;

	readArray(array, len);

	cout << "Printing the array: ";
	printArray(array, len);
	cout << endl;

	qsort(array, len, sizeof(int), (int (*)(const void*,const void*))cmp);

	cout << "Printing the sorted array: ";
	printArray(array, len);
	cout << endl;


	delete [] array;

	return 0;
}

