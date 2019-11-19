#include "sorting.h"
#include "utils.h"

/*
Implements selection sort to sort an array of integers
-arr[]: the array to be sorted
-n: the size of the array
-returns: the sorted array
*/
int *selectionSort(int arr[], int n) {

	// Loop over all elements
	for (int i = 0; i < n; i++) {
		int min_idx = i;

		// Find the min element in the unsorted part of the array
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j; 
			}
		}

		// Place the min element into its properly sorted position
		swap(&arr[i], &arr[min_idx]);
	}

	return arr;
}