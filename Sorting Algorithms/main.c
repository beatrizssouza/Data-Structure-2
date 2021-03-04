#include "sorting.c"

int main() {

  int comparisons = 0;
  clock_t time;

  //selection sort
  int* v1 = randomVector(N, MAX_VALUE, SEED);
  time = clock();
  selectionSort(v1, N, &comparisons);
  time = clock() - time;
  printf("Selection sort comparisons: %d\n", comparisons);
  printf("Execution time was: %f seconds\n\n",((float)time)/CLOCKS_PER_SEC);

  //insertion sort
  comparisons = 0;
  time = 0;
  int* v2 = randomVector(N, MAX_VALUE, SEED);

  time = clock();
  insertionSort(v2, N, &comparisons);
  time = clock() - time;

  printf("Insertion sort comparisons: %d\n", comparisons);
  printf("Execution time was: %f seconds\n\n",((float)time)/CLOCKS_PER_SEC);

  //bubble sort
  comparisons = 0;
  time = 0;
  int* v3 = randomVector(N, MAX_VALUE, SEED);

  time = clock();
  bubbleSort(v3, N, &comparisons);
  time = clock() - time;  
  
  printf("Bubble sort comparisons: %d\n", comparisons);
  printf("Execution time was: %f seconds\n\n",((float)time)/CLOCKS_PER_SEC);
  
  free(v1);
  free(v2);
  free(v3);
  v1 = NULL;
  v2 = NULL;
  v3 = NULL;
  
  return 0;
}