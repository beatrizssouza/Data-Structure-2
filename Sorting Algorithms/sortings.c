#include "header.h"


int* randomVector(int size, int max, int seed) {

  int* v = (int*) calloc(size, sizeof(int));
  
  srand(seed);

  for(int i = 0; i < size; i++) v[i] = rand() % max;
  
  return v;
};

int* orderedVector(int size, int max){

  int* v = (int*) calloc(size, sizeof(int));
  for(int i = 0; i < size; i++) v[i] = i;
  return v;
}

void printVector(int* vector, int length){  
  printf("[");
  for(int i = 0; i < length; i++){
      printf("%d", vector[i]);
      printf("%s", i == length - 1 ? "]\n" : ", ");
  }
};

int maxValue(int *vector, int initialPosition, int finalPosition){
  int biggerElementIndex = finalPosition;
  int aux = vector[finalPosition];
  for(int i=finalPosition; i>initialPosition; i--){
    if(vector[i - 1] > aux){
      aux = vector[i - 1];
      biggerElementIndex = i - 1;
    }
  }
  return biggerElementIndex;
};

void changeElements(int* vector, int position, int nextPosition){
  int aux = vector[position];
  vector[position] = vector[nextPosition];
  vector[nextPosition] = aux;
};

void selectionSort(int *vector, int quantity){
  int aux;
  for(int i = quantity - 1; i > 0; i--){ 
    aux = maxValue(vector, 0, i);
    changeElements(vector, aux, i); 
  }
};

void insertionSort(int* v, int n){
  int i, aux, j;
  for(i = 1; i < n; i++) {
    aux = v[i];
    j = i - 1;
    while(j >= 0 && v[j] > aux) {
      v[j + 1] = v[j];
      j = j - 1;
    }
    v[j + 1] = aux;
  }
}

void bubbleSort(int* vector, int quantity){
  int i, j;
  for(j = quantity - 1; j > 0; j--){
    for(i=0; i < j; i++){
      if(vector[i] > vector[i+1]) 
        changeElements(vector, i, i+1);
    }
  }
};

void mergeSort(int *vector, int left, int right){
  int middle;
  if(left < right){
    middle = ((left + right) / 2);
    mergeSort(vector, left, middle);
    mergeSort(vector, middle+1, right);
    merge(vector, left, middle, right);
  }
};

void merge(int* vector, int initialPosition, int middle, int finalPosition){
  int i, j, k; 
  
  int quantityLeft = middle - initialPosition + 1;
  int quantityRight = finalPosition - middle; 

  int* left = malloc(sizeof(int) * (quantityLeft + 1));
  int* right = malloc(sizeof(int)* (quantityRight + 1));

  for(i=0;i<quantityLeft;i++) left[i] = vector[initialPosition + i];
  
  for(j=0;j<quantityRight;j++) right[j] = vector[middle + j + 1]; 
  
  left[quantityLeft] = right[quantityRight] = INT_MAX;

  i = j = 0;

  for(k=initialPosition; k <= finalPosition; k++)
    if(left[i] <= right[j]){
      vector[k] = left[i];
      i++;
    }else{
      vector[k] = right[j];
      j++;
    };
  
  free(left);
  free(right);
};

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
