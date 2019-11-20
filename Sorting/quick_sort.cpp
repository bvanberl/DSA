#include "sorting.h"
#include "utils.h"


/*
Selects a random index for pivot. Puts elements smaller than pivot to the left of the pivot and
elements larger than pivot to the right of the pivot.
-arr: the array to be sorted
-l: the left boundary of the subarray
-r: the right boundary of the subarray
*/
int partition(int arr[], int l, int r) {
	int pivotIdx = randInt(l, r); // Get the index of the pivot
	int pivotKey = arr[pivotIdx];
	swap(&arr[pivotIdx], &arr[r]); // Put the pivot element at the end of the array, for now

	int i = l - 1; // Imdex of smaller element

	for (int j = l; j < r; j++) {
		// If this element is smaller than the pivot, increment index of smaller element and make a swap
		if (arr[j] < pivotKey) {
			swap(&arr[++i], &arr[j]);
		}
	}

	swap(&arr[++i], &arr[r]); // Place the pivot in its correct positino
	return i;
}


/*
Performs a recusrive step of quick sort. Partitions the array, then recurses for the left and right subarrays
*/
void quickSortStep(int arr[], int l, int r) {
	if (l < r) {
		int pivot = partition(arr, l, r);
		quickSortStep(arr, l, pivot - 1);
		quickSortStep(arr, pivot + 1, r);
	}
}

/*
Implements quick sort to sort an array of integers
-arr: the array to be sorted
-n: the size of the array
-returns: the sorted array
*/
int *quickSort(int arr[], int n) {
	quickSortStep(arr, 0, n - 1);
	return arr;
}