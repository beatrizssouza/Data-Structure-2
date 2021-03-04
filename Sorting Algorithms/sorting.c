#include "header.h"

int* randomVector(int size, int max, int seed) {

  int* v = (int*) calloc(size, sizeof(int));
  
  srand(seed);

  for(int i = 0; i < size; i++) v[i] = rand() % max;
  
  return v;
};

void printVector(int* vector, int length){  
  printf("[");
  for(int i = 0; i < length; i++){
      printf("%d", vector[i]);
      printf("%s", i == length - 1 ? "]\n" : ", ");
  }
};

int maxValue(int *vector, int initialPosition, int finalPosition, int *comparisons){
  int biggerElementIndex = finalPosition;
  int aux = vector[finalPosition];
  for(int i=finalPosition; i>initialPosition; i--){
    if(vector[i - 1] > aux){
      aux = vector[i - 1];
      biggerElementIndex = i - 1;
    }
  *comparisons += 1;
  }
  return biggerElementIndex;
};

void changeElements(int* vector, int position, int nextPosition){
  int aux = vector[position];
  vector[position] = vector[nextPosition];
  vector[nextPosition] = aux;
};

void selectionSort(int *vector, int quantity, int *selectionComparisons){
  int aux;
  for (int i = quantity - 1; i > 0; i--){ 
    aux = maxValue(vector, 0, i, selectionComparisons);
    changeElements(vector, aux, i); 
  }
};

void insertionSort(int* vector, int quantity, int* comparisons){
  int j;
  for(int i = 0; i < quantity; i++){
    j = i;
    while(j > 0 && vector[j - 1] > vector[j]){
      *comparisons += 1;
      changeElements(vector, j - 1, j);
      j--;
    }
  }
};

void bubbleSort(int *vector, int quantity, int *bubbleComparisons){
  int i, j;
  for(j = quantity - 1; j > 0; j--){
    for(i=0; i < j; i++){
      *bubbleComparisons += 1;  
      if(vector[i] > vector[i+1]) 
        changeElements(vector, i, i+1);
    }
  }
};