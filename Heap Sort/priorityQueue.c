#include <stdlib.h>
#include "header.h"

int* createQueue(int size) {
    int* queue = (int*) malloc(size * sizeof(int));

    return queue;
};

int getFirstElement(int* priorityQueue, int size){
    return priorityQueue[0];
}

int removeMaxElement(int* priorityQueue, int size){
    int newSize = size - 1;
    switchElements(priorityQueue, 0, newSize);
    maxHeapify(priorityQueue, 0, newSize);
    return newSize;
}

int insertNewElement(int* priorityQueue, int size, int newElement){
  int newSize = size + 1;
  priorityQueue[size] = newElement;

  while(priorityQueue[size] > priorityQueue[root(size)]){
    switchElements(priorityQueue, size, root(size));
    size = root(size);
  }
  return newSize;
}

int removeMinElement(int* priorityQueue, int size) {
    int newSize = size - 1;
    switchElements(priorityQueue, 0, newSize);
    buildMinHeap(priorityQueue, newSize);
    return newSize;
}

int insertNewMinElement(int* priorityQueue, int size, int newElement) {
    priorityQueue[size] = newElement;

    while(priorityQueue[size] < priorityQueue[root(size)]) {
        switchElements(priorityQueue, size, root(size));
        size = root(size);
    }
    return size - 1;
}