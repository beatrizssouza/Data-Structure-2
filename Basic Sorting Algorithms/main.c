#include "header.h"
 
int main() {

  clock_t time;
  
  // int* v = randomVector(N, MAX_VALUE, SEED);
  int* v = orderedVector(N, MAX_VALUE);

  // selection sort

  time = clock();
  selectionSort(v, N);
  time = clock() - time;
  printf("Selection sort\n");
  printf("Execution time was: %f seconds\n\n",((float)time)/CLOCKS_PER_SEC);
  
  free(v);
  v = NULL;
  
  //insertion sort

  // v = randomVector(N, MAX_VALUE, SEED);
  v = orderedVector(N, MAX_VALUE);
  time = clock();
  insertionSort(v, N);
  time = clock() - time;
  printf("Insertion sort\n");
  printf("Execution time was: %f seconds\n\n",((float)time)/CLOCKS_PER_SEC);
  
  free(v);
  v = NULL;

  //merge sort
  
  // v = randomVector(N, MAX_VALUE, SEED);
  v = orderedVector(N, MAX_VALUE);
  time = clock();
  mergeSort(v, 0, N);
  time = clock() - time;
  printf("Merge sort\n");  
  printf("Execution time was: %f seconds\n\n",((float)time)/CLOCKS_PER_SEC);
  
  free(v);
  v = NULL;

  //quick sort

  //v = randomVector(N, MAX_VALUE, SEED);
  v = orderedVector(N, MAX_VALUE);
  time = clock();
  quickSort(v, 0, N);
  time = clock() - time;
  printf("quick sort\n");  
  printf("Execution time was: %f seconds\n\n",((float)time)/CLOCKS_PER_SEC);
  
  free(v);
  v = NULL;

  //bubble sort

  // v = randomVector(N, MAX_VALUE, SEED);
  v = orderedVector(N, MAX_VALUE);
  time = clock();
  bubbleSort(v, N);
  time = clock() - time;
  printf("Bubble sort\n");  
  printf("Execution time was: %f seconds\n\n",((float)time)/CLOCKS_PER_SEC);
  
  free(v);
  v = NULL;

  return 0;
}