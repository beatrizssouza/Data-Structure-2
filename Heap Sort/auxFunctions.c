#include "header.h"

int left(int i){
  return 2 * i + 1;
};

int right(int i){
  return left(i) + 1;
};

int root(int i){
  return (i - 1) / 2;
}

void switchElements(int* vector, int position, int newPosition){
  int aux = vector[position];
  vector[position] = vector[newPosition];
  vector[newPosition] = aux;
};