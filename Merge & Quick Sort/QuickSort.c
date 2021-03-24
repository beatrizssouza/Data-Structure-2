#include "header.h"

int partition(int* vector, int p, int r){
  int x;
  int i, j;
  i = p - 1;
  x = vector[r];
  for(j = p; j < r; j++){
    if(vector[j] <= x){
      i++;
      changeElements(vector, i, j);
    }
  }
  changeElements(vector, i + 1, r);
  return i + 1;
}

void quickSort(int* vector, int left, int right){
  int pivot;
  if(left < right){
    pivot = partition(vector, left, right);
    quickSort(vector, left, pivot - 1);
    quickSort(vector, pivot + 1, right);
  }
}