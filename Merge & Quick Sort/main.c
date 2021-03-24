#include "header.h"
 
int main() {

  clock_t time;
  
  // int* v = randomVector(N, MAX_VALUE, SEED);
  int* v = orderedVector(N, MAX_VALUE);

  //merge sort

  time = clock();
  mergeSort(v, 0, N);
  time = clock() - time;
  printf("Merge sort\n");  
  printf("Execution time was: %f seconds\n\n",((float)time)/CLOCKS_PER_SEC);

  //quick sort

  time = clock();
  quickSort(v, 0, N);
  time = clock() - time;
  printf("quick sort\n");  
  printf("Execution time was: %f seconds\n\n",((float)time)/CLOCKS_PER_SEC);
  
  free(v);
  v = NULL;

  //bubble sort

  return 0;
}