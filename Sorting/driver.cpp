#include <iostream>
#include "sorting.h"
#include "utils.h"
using namespace std;

int main() {

	// Create a test array and print it
	int testArr[] = { 50, 3, 0, -6, 4, 23, -12, 4, 37, -70 };
	int n = sizeof(testArr) / sizeof(testArr[0]);
	cout << "Original array: " << stringifyArray(testArr, n) << endl;

	// Sort the array
	int *sortedArr = quickSort(testArr, n);

	// Print resultant sorted array
	cout << "Sorted array: " << stringifyArray(sortedArr, n) << endl;
}