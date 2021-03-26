#include "mainData.h"

int main(){
  
  printf("%d elements\n", N);
  
  int* vector = randomVector(N, MAX, SEED);

  #if DEBUG 
  printf("printing unordered vector\n");
  printVector(vector, N);
  #endif
  
  t = clock();
  radixSort(vector, N, 10);
  t = clock() - t;
  printf("decimal execution time(ms): %f\n", ((float)t/(CLOCKS_PER_SEC/1000)));
  
  #if DEBUG 
  printf("printando ordered vector\n");
  printVector(vector, N);
  #endif
  
  printf("verifying it the vector is sorted.. ");
  if(verifySortedVector(vector, N)) printf("it its!\n");
  else printf("its not!\n");

  vector = randomVector(N, MAX, SEED);
  
  #if DEBUG 
  printf("printing unordered vector\n");
  printVector(vector, N);
  #endif
  
  t = clock();
  radixSort(vector, N, 2);
  t = clock() - t;
  printf("binary execution time(ms): %f\n", ((float)t/(CLOCKS_PER_SEC/1000)));
  
  #if DEBUG 
  printf("printando ordered vector\n");
  printVector(vector, N);
  #endif
  
  printf("verifying it the vector is sorted.. ");
  if(verifySortedVector(vector, N)) printf("it its!\n");
  else printf("its not!\n");
  
  return 0;

};