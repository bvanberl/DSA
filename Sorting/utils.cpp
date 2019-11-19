#include "utils.h"

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
Produces a string depicting the contents of an array
*/
string stringifyArray(int arr[], int n) {
	string arrString = "";
	for (int i = 0; i < n; i++) {
		arrString += to_string(arr[i]) + " ";
	}
	return arrString;
}