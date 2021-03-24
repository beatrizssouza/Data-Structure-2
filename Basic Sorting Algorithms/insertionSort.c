#include "header.h"

void insertionSort(int* v, int n, int* insertionComparisons){
  int i, aux, j;
  for(i = 1; i < n; i++) {
    aux = v[i];
    j = i - 1;
    while(j >= 0 && v[j] > aux) {
      *insertionComparisons += 1;
      v[j + 1] = v[j];
      j = j - 1;
    }
    v[j + 1] = aux;
  }
}
