#include "header.h"

void selectionSort(int *vector, int quantity, int *selectionComparisons){
  int aux;
  for(int i = quantity - 1; i > 0; i--){ 
    aux = maxValue(vector, 0, i, selectionComparisons);
    changeElements(vector, aux, i); 
  }
};
