#include "labyrinth.h"
#include <stdio.h>

void loadmatrix(char* archive, int mat[T][T]){
    
    FILE *arq = fopen(archive, "r");
    
    for(int i = 0; i < T; i++)
        for(int j =0; j < T; j++) 
            fscanf(arq,"%d",&mat[i][j]);

    fclose(arq);
}

void printmatrix(int mat[T][T]){
    
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            if(mat[i][j] == BLOCK) printf("[]");
            else if(i == 9 && j == 9) printf("🏁");
            else printf("  ");
        }
        printf("\n");
    }
}

int search(int mat[T][T],int lin,int col){
    
    int aux;
    
   if((lin >= T) || (lin < 0) || (col >= T) || (col < 0)) aux = 0;
    else if(mat[lin][col] == BLOCK) aux = 0;
    else if(lin == 9 && col == 9) aux = 1;
    else{
        mat[lin][col] = 1;
        printf("%d,%d -> " , lin, col);
        aux = search(mat,lin-1,col);
        aux |= search(mat,lin+1,col);
        aux |= search(mat,lin,col-1);
        aux |= search(mat,lin,col+1);
    }
}