#include "sorting.h"
#include "utils.h"

/*
Merges 2 subarrays such that the result is a sorted subarray
-arr[]: the array to be sorted
-l: the index of the leftmost element in the left subarray
-m: the index of the rightmost element in the left subarray
-r: the index of the rightmost element in the right subarray
*/
void merge(int arr[], int l, int m, int r) {
	int n_L = m - l + 1; // Number of elements in left subarray
	int n_R = r - m; // Number of elements in right subarray
	int *L = new int[n_L]; // Left subarray
	int *R = new int[n_R]; // Right subarray

	// Initialize subarrays. Requires additional O(n) space.
	for (int i = 0; i < n_L; i++) {
		L[i] = arr[l + i];
	}
	for (int i = 0; i < n_R; i++) {
		R[i] = arr[m + 1 + i];
	}

	// Copy the elements in the subarrays in sorted order to the original array
	int i = 0, j = 0, k = l;
	while (i < n_L && j < n_R) {
		if (L[i] <= R[j]) {
			arr[k++] = L[i++];
		}
		else {
			arr[k++] = R[j++];
		}
	}

	// If any elements left in the subarrays, copy them back to the original array
	while (i < n_L) {
		arr[k++] = L[i++];
	}
	while (j < n_R) {
		arr[k++] = R[j++];
	}
	return;
}


/*
Runs the merge sort recursion step
-arr[]: the array to be sorted
-l: the index of the leftmost element in the subarray
-r: the index of the rightmost element in the subarray
*/
void mergeSortStep(int arr[], int l, int r) {
	if (r <= l) {
		return;
	}
	int m = (l + r) / 2; // Find the middle index
	mergeSortStep(arr, l, m);
	mergeSortStep(arr, m + 1, r);
	merge(arr, l, m, r);
	return;
}


/*
Implements merge sort to sort an array of integers
-arr[]: the array to be sorted
-n: the size of the array
-returns: the sorted array
*/
int *mergeSort(int arr[], int n) {
	mergeSortStep(arr, 0, n - 1);
	return arr;
}

