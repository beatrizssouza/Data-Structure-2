#ifndef HEADER_H 
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10000
#define MAX_VALUE 1000
#define SEED 0

int* randomVector(int size, int max, int seed);
void printVector(int* vector, int length);
int maxValue(int *vector, int initialPosition, int finalPosition, int *comparisons);
void changeElements(int* vector, int position, int nextPosition);
void selectionSort(int *vector, int quantity, int *selectionComparisons);
void insertionSort(int* vector, int quantity, int* comparisons);
void bubbleSort(int *vector, int quantity, int *bubbleComparisons);

#endif