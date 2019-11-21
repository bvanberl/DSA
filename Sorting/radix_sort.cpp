#include "sorting.h"
#include "utils.h"

/*
Implements radix sort to sort an array of integers (including negative integers). Assumes decimal numbers.
-arr[]: the array to be sorted
-n: the size of the array
-returns: the sorted array
*/
int *radixSort(int arr[], int n) {

	int min = minimum(arr, n);

	// If array contains negative elements, shift all elements such that all are >= 0
	if (min < 0) {
		for (int i = 0; i < n; i++) {
			arr[i] -= min;
		}
	}

	int max = maximum(arr, n); // Get max element of the array

	// Call stable counting sort to sort the array by the i'th digit
	// Start with least significant digit
	for (int exponent = 1; max / exponent > 0; exponent *= 10) {
		arr = countingSortDecimal(arr, n, exponent);
	}

	// If array contains negative elements, shift all elements back to original values
	if (min < 0) {
		for (int i = 0; i < n; i++) {
			arr[i] += min;
		}
	}
	
	return arr;
}