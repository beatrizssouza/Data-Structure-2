#include <stdlib.h>
#include <string.h>
#include "radixHeader.h"

int getMaxElement2(int* vector, int size){
    int max = vector[0];
    for(int i = 1; i < size; i++)
        if(vector[i] > max) max = vector[i];
    return max;
}

void countingSort2(int* vector, int size, int div, int base, int* temp){
    int key[base], counter = 0;
    memset(key, 0, base * sizeof(int));

    #define DIGIT(X) (X / div) % base

    for(int i = 0; i < size; i++) key[DIGIT(vector[i])]++;
    for(int i = 0; i <= base; i++){
        int aux = key[i];
        key[i] = counter;
        counter += aux; 
    }
    for(int i = 0; i <= size; i++){
        //DIGIT definition switches vector[i] on X
        temp[key[DIGIT(vector[i])]] = vector[i];
        key[DIGIT(vector[i])]++;
    }
    memcpy(vector, temp, sizeof(int) * size);
}

void radixSort(int* vector, int size){
    int div = 1;
    int largestElement = getMaxElement2(vector, size);
    int* temp = malloc(size * sizeof(int));
    
    while(largestElement > 0){
        countingSort2(vector, size, div, 10, temp);
        div *= 10;
        largestElement /= 10;
    }
    free(temp);
}