#include "sorting.h"
#include "utils.h"

/*
Implements counting sort to sort an array of integers that appear within range [low, high]
-arr[]: the array to be sorted
-n: the size of the array
-low: the lower bound for element values
-high: the upper bound for element values
-returns: the sorted array
*/
int *countingSort(int arr[], int n, int low, int high) {

	int rangeSize = high - low + 1;
	int *counts = new int[rangeSize](); // Counts array for each number in the range
	int *sortedArr = new int[n](); // The array to return
	int i = 0; // For loop indexing

	// Determine the # of times that each element of arr appears
	for (i = 0; i < n; i++) {
		counts[arr[i] - low]++;
	}

	// Modify counts array such that each element is sum of previous counts
	for (i = 1; i < rangeSize; i++) {
		counts[i] += counts[i - 1];
	}

	// Build up the sorted array. Ensure stability by starting sort at the end of the input array
	for (i = n - 1; i >= 0; i--) {
		sortedArr[counts[arr[i] - low] - 1] = arr[i];
		counts[arr[i] - low]--;
	}

	return sortedArr;
}



/*
Implements counting sort to sort an array of integers that appear within range [low, high]
-arr[]: the array to be sorted
-n: the size of the array
-low: the lower bound for element values
-high: the upper bound for element values
-returns: the sorted array
*/
int *countingSortDecimal(int arr[], int n, int exponent) {

	int counts[10] = { 0 }; // Counts array for each number in the range
	int *sortedArr = new int[n](); // The array to return
	int i = 0, digit = 0;

	// Determine the # of times that each element of arr appears
	for (i = 0; i < n; i++) {
		digit = (arr[i] / exponent) % 10;
		counts[digit]++;
	}

	// Modify counts array such that each element is sum of previous counts
	for (i = 1; i < 10; i++) {
		counts[i] += counts[i - 1];
	}

	// Build up the sorted array. Ensure stability by starting sort at the end of the input array
	for (i = n - 1; i >= 0; i--) {
		digit = (arr[i] / exponent) % 10;
		sortedArr[counts[digit] - 1] = arr[i];
		counts[digit]--;
	}

	return sortedArr;
}