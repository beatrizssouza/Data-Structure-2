#include "header.h"

//Sort function

void heapSortMax(int* vector, int size){
    buildMaxHeap(vector, size);
    for(int i = size - 1; i > 0; i--){
        switchElements(vector, 0, i);
        maxHeapify(vector, 0, i);
    }
};

void heapSortMin(int* vector, int size){
 buildMinHeap(vector, size);
  for(int i = size - 1 ; i > 0; i--){
    switchElements(vector, 0, i);
    minHeapify(vector, 0, i);
  }
};

//Max heap sort functions 

void maxHeapify(int* vector, int i, int size){
    int largest = i;
    int leftElement = left(i);
    int rightElement = right(i);
    
    if((leftElement < size) && (vector[leftElement] > vector[i])) largest = leftElement;
    if((rightElement < size) && (vector[rightElement] > vector[largest])) largest = rightElement;
    if(largest != i){
        switchElements(vector, i, largest);
        maxHeapify(vector, largest, size);
    }
};

void buildMaxHeap(int* vector, int size){
    for(int i = size/2; i >= 0; i--) maxHeapify(vector, i, size);
};

//Min heap sort functions 

void minHeapify(int* vector, int i, int size){
    int smallest = i;
    int leftElement = left(i);
    int rightElement = right(i);
    if((leftElement < size) && (vector[leftElement] < vector[i])) smallest = leftElement;
    if((rightElement < size) && (vector[rightElement] < vector[smallest])) smallest = rightElement;
    if(smallest != i){
        switchElements(vector, i, smallest);
        minHeapify(vector, smallest, size);
    }   
};

void buildMinHeap(int* vector, int size) {
  for(int i = size/2; i >= 0; i--) minHeapify(vector, i, size);
}
