#define T 10
#define EMPTY 0
#define BLOCK 1

//import labyrinth from lab_.txt 
void loadmatrix(char* archive, int mat[T][T]);
//print labyrinth from matrix
void printmatrix(int mat[T][T]);
//recursive function to walk through the matrix
int search(int mat[T][T],int lin,int col);