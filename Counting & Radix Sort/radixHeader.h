#ifndef RADIX_HEADER_H
#define RADIX_HEADER_H

#include <stdlib.h>
#include <string.h>

int maxRadix(int* vector, int size);
void countingSortD(int* vector, int size, int div, int base, int* temp);
void countingSortB(int* vector, int size, int div, int base, int* temp);
void radixSort(int* vector, int size, int base);
#endif