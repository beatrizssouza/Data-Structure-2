#include "vector.h"
#include <stdio.h>

int* randomVector(int size, int max, int seed){
  int* newVector = (int*) malloc(size * sizeof(int));
  srand(seed);
  for(int i = 0; i < size; i++) newVector[i] = rand() % (max + 1);
  return newVector;
}

void printVector(int* vector, int size){  
  printf("[");
  for(int i = 0; i < size; i++){
    printf("%d", vector[i]);
    printf("%s", i == size - 1 ? "]\n" : ", ");
  }
};