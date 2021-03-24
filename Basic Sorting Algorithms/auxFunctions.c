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
