#include "sorting.h"
#include "utils.h"
#include <iostream>


/*
Implements selection sort on an array of integers
-arr[]: the array to be sorted
-n: the size of the array
-returns: the sorted array
*/
int *bubbleSort(int arr[], int n) {

	bool swapOccurred; // Determine if a swap occurred during the array pass

	// Need n-1 passes through the array
	for (int i = 0; i < n - 1; i++) {
		swapOccurred = false;

		// Move through the 
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
				swapOccurred = true;
			}
		}

		// If no swaps occurred, the array is already sorted
		if (!swapOccurred) {
			break;
		}
	}

	return arr;
}