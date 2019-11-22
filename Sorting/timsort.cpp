#include "sorting.h"
#include "utils.h"
#include <iostream>

int *timSort(int arr[], int n, int run) {

	for (int i = 0; i < n; i += run) {
		insertionSortSubarray(arr, i, minimum(i + run - 1, n - 1));
	}

	// Build up the size of the subarrays to be merged. Start with size=run
	for (int size = run; size < n; size *= 2) {

		// Merge sort adjacent pairs of subarrays
		for (int l = 0; l < n; l += 2 * size) {
			int m = l + size - 1;
			int r = minimum((l + 2 * size - 1), (n - 1));
			merge(arr, l, m, r);
		}
	}

	return arr;
}