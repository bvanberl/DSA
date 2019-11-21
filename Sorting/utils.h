#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <time.h>
using namespace std;

void swap(int *a, int *b);

string stringifyArray(int arr[], int n);

int randInt(int low, int high);

int maximum(int arr[], int n);

int minimum(int arr[], int n);

#endif