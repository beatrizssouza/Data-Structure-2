#include "header.h"

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
  int* right = malloc(sizeof(int) * (quantityRight + 1));

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
    }
  free(left);
  free(right);
};