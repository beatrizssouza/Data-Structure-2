#ifndef LABYRINTH_H
#define LABYRINTH_H

#include <stdio.h>

#define T 10
#define EMPTY 0
#define BLOCK 1

void loadmatrix(char* archive, int mat[T][T]);
void printmatrix(int mat[T][T]);
int search(int mat[T][T],int lin,int col);

#endif
