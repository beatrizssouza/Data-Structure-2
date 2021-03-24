#include "header.h"

//Sort function based on max heapify
void heapSortMax(int* array, int size){
    buildMaxHeap(array, size);
    for(int i = size - 1; i > 0; i--){
        switchElements(array, 0, i);
        maxHeapify(array, 0, i);
    }
};

//Sort function based on min heapify
void heapSortMin(int* array, int size){
 buildMinHeap(array, size);
  for(int i = size - 1 ; i > 0; i--){
    switchElements(array, 0, i);
    minHeapify(array, 0, i);
  }
};

//Max heap functions 
void maxHeapify(int* array, int i, int size){
    int largest = i;
    int leftElement = left(i);
    int rightElement = right(i);
    
    if((leftElement < size) && (array[leftElement] > array[i])) largest = leftElement;
    if((rightElement < size) && (array[rightElement] > array[largest])) largest = rightElement;
    if(largest != i){
        switchElements(array, i, largest);
        maxHeapify(array, largest, size);
    }
};

void buildMaxHeap(int* array, int size){
    for(int i = size/2; i >= 0; i--) maxHeapify(array, i, size);
};

//Min heap functions 
void minHeapify(int* array, int i, int size){
    int smallest = i;
    int leftElement = left(i);
    int rightElement = right(i);
    if((leftElement < size) && (array[leftElement] < array[i])) smallest = leftElement;
    if((rightElement < size) && (array[rightElement] < array[smallest])) smallest = rightElement;
    if(smallest != i){
        switchElements(array, i, smallest);
        minHeapify(array, smallest, size);
    }   
};

void buildMinHeap(int* array, int size) {
  for(int i = size/2; i >= 0; i--) minHeapify(array, i, size);
}
