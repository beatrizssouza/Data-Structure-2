#ifndef heapheaderh
#define heapheaderh

//max
void heapSortMax(int* vector, int size);
void buildMaxHeap(int* vector, int size);
void maxHeapify(int* vector, int i, int n);
//min
void heapSortMin(int* vector, int size);
void buildMinHeap(int* vector, int size);
void minHeapify(int* vector, int i, int size);

#endif