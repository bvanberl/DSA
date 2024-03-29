#ifndef SORTING_H
#define SORTING_H

int *selectionSort(int arr[], int n);

int *bubbleSort(int arr[], int n);

int *insertionSort(int arr[], int n);
void insertionSortSubarray(int arr[], int l, int r);

int *mergeSort(int arr[], int n);
void merge(int arr[], int l, int m, int r);

int *quickSort(int arr[], int n);

int *countingSort(int arr[], int n, int low, int high);

int *countingSortDecimal(int arr[], int n, int exponent);

int *radixSort(int arr[], int n);

int *timSort(int arr[], int n, int run);


#endif