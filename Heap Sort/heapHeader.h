#ifndef HEAPHEADER_H
#define HEAPHEADER_H

//max
void heapSortMax(int* array, int size);
void buildMaxHeap(int* array, int size);
void maxHeapify(int* array, int i, int n);
//min
void heapSortMin(int* array, int size);
void buildMinHeap(int* array, int size);
void minHeapify(int* array, int i, int size);

#endif