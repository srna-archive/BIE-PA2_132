#include "functions.h"
#include <iostream>

using namespace std;

int cmp(const int* val1, const int*val2) {
	return *val1 - *val2;
}

void printArray(int*array, int len) {
	for(int i = 0; i < len; i++) {
		cout << array[i] << " ";
	}
}

void readArray(int *& array, int & len) {
	cout << "Enter the length of the array: ";
	cin >> len;
	array = new int[len];
	for(int i = 0; i < len; i++) {
		cout << "Enter element #" << i << ": ";
		cin >> array[i];
	}
}

