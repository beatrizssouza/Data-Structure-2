#include <time.h>
#include <stdlib.h>

typedef enum { false, true } bool;

int* randomVector(int size, int max, int seed);
void printVector(int* vector, int size);
bool verifySortedVector(int* vector, int size);