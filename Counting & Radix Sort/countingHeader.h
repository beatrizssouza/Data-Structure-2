#ifndef COUNTING_HEADER_H
#define COUNTING_HEADER_H

//creating struct type as Info
typedef struct info{
    int data;
    int key;
}Info;

//functions prototypes
int getMaxElement(Info* vector, int size);
void countingSort(Info* vector, int size);

#endif