#include <stdio.h>
#include <time.h>
#include "radixHeader.h"
#include "vector.h"
#define N 1000
#define MAX N * 100
#define SEED 0
#define DEBUG 0

int main(){

  clock_t t;
  
  printf("%d elements\n", N);
  
  int* vector = randomVector(N, MAX, SEED);

  #if DEBUG 
  printf("printando vetor desordenado\n");
  printVector(vector, N);
  #endif
  
  t = clock();
  radixSort(vector, N, 10);
  t = clock() - t;
  printf("decimal execution time(ms): %f\n", ((float)t/(CLOCKS_PER_SEC/1000)));
  
  #if DEBUG 
  printf("printando vetor ordenado\n");
  printVector(vector, N);
  #endif
  
  vector = randomVector(N, MAX, SEED);
  
  #if DEBUG 
  printf("printando vetor desordenado\n");
  printVector(vector, N);
  #endif
  
  t = clock();
  radixSort(vector, N, 2);
  t = clock() - t;
  printf("binary execution time(ms): %f\n", ((float)t/(CLOCKS_PER_SEC/1000)));
  
  #if DEBUG 
  printf("printando vetor ordenado\n");
  printVector(vector, N);
  #endif
  
  return 0;

};