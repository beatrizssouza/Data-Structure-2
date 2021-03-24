#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define N 10000
#define MAX_VALUE N*100
#define SEED 0

int* randomVector(int size, int max, int seed);
int* orderedVector(int size, int max);
void printVector(int* vector, int length);
int maxValue(int *vector, int initialPosition, int finalPosition);
void changeElements(int* vector, int position, int nextPosition);
void mergeSort(int *vector, int left, int right);
void merge(int* vector, int initialPosition, int middle, int finalPosition);
void quickSort(int* vector, int left, int right);
int partition(int* vector, int p, int r);

#endif