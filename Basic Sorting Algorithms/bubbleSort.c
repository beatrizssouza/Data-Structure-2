#include "header.h"

void bubbleSort(int *vector, int quantity, int *bubbleComparisons){
  int i, j;
  for(j = quantity - 1; j > 0; j--){
    for(i=0; i < j; i++){
      *bubbleComparisons += 1;  
      if(vector[i] > vector[i+1])  changeElements(vector, i, i+1);
    }
  }
};