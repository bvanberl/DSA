#include "utils.h"
#include <iostream>
using namespace std;

/*
Swaps two elements in an array
-a: index of element 1
-b: index of element 2
*/
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*
Prints the contents of an array on a single line
*/
void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}