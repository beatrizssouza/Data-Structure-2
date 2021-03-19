#ifndef queueheaderh
#define queueheaderh

int* createQueue(int size);
int getFirstElement(int* priorityQueue, int size);
//Max
int removeMaxElement(int* priorityQueue, int size);
int insertNewElement(int* priorityQueue, int size, int newElement);
//Min
int removeMinElement(int* priorityQueue, int size);
int insertNewMinElement(int* priorityQueue, int size, int newElement);

#endif