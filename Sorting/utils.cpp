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
-arr: array to print
-n: size of array
*/
string stringifyArray(int arr[], int n) {
	string arrString = "";
	for (int i = 0; i < n; i++) {
		arrString += to_string(arr[i]) + " ";
	}
	return arrString;
}

/*
Returns random integer within the inclusive range of [low, high]
-low: the lower bound of the range
-high: the upper bound of the range
*/
int randInt(int low, int high) {
	srand(time(0));
	return rand() % (high - low) + low;
}


/*
Returns maximum element of the input array
-arr: array to print
-n: size of array
*/
int maximum(int arr[], int n) {
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}


/*
Returns minimum element of the input array
-arr: array to print
-n: size of array
*/
int minimum(int arr[], int n) {
	int min = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}