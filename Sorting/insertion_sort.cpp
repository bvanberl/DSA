#include "sorting.h"
#include "utils.h"

/*
Implements insertion sort to sort an array of integers
-arr[]: the array to be sorted
-n: the size of the array
-returns: the sorted array
*/
int *insertionSort(int arr[], int n) {

	// Loop over the array
	for (int i = 1; i < n; i++) {
		int j = i - 1;
		int key = arr[i]; // The element to be properly placed

		// Move elements larger than the key one position to the right
		while ((j >= 0) && (arr[j] > key)) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = key; // Place the key in its proper sorted position
	}
	return arr;
}


/*
Implements insertion sort to sort a subarray of integers
-arr[]: the subarray to be sorted
-l: the index of the leftmost element
-r: the index of the rightmost element
-returns: the sorted subarray
*/
void insertionSortSubarray(int arr[], int l, int r) {

	// Loop over the array
	for (int i = l + 1; i <= r; i++) {
		int j = i - 1;
		int key = arr[i]; // The element to be properly placed

		// Move elements larger than the key one position to the right
		while ((j >= l) && (arr[j] > key)) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key; // Place the key in its proper sorted position
	}
	return;
}