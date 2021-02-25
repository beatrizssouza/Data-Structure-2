#include <stdio.h>

#define T 10
#define EMPTY 0
#define BLOCK 1
#define PATH -1

void loadmatrix(char* archive, int mat[T][T]);
void printmatrix(int mat[T][T]);
int search(int mat[T][T],int lin,int col);

void loadmatrix(char* archive, int mat[T][T]){
    
    FILE *arq = fopen(archive, "r");
    
    for(int i = 0; i < T; i++)
        for(int j =0; j < T; j++) fscanf(arq,"%d",&mat[i][j]);

    fclose(arq);
}

void printmatrix(int mat[T][T]){
    
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            if(mat[i][j] == BLOCK) printf("[]");
            else if(i == 9 && j == 9) printf("🏁");
            else if(mat[i][j] == -1) printf("+ ");
            else printf("  ");
        }
        printf("\n");
    }
}

int search(int mat[T][T],int lin,int col){
    
    int aux;
    
    if((lin >= T) || (lin < 0) || (col >= T) || (col < 0)) aux = 0;
    else if(mat[lin][col] == BLOCK || mat[lin][col] == PATH) aux = 0;
    else if(lin == 9 && col == 9) aux = 1;
    else{
        mat[lin][col] = PATH;
        aux = search(mat,lin-1,col);
        aux |= search(mat,lin+1,col);
        aux |= search(mat,lin,col-1);
        aux |= search(mat,lin,col+1);
    }
    printmatrix(mat);

    return aux;
}

int main(){

    int MATRIX[T][T];

    char labyrinth[] = "lab.txt";
    loadmatrix(labyrinth, MATRIX);
    
    printmatrix(MATRIX);
    
    printf("\nposições:\n");
    if(search(MATRIX, 0, 0)) printf("\n\nsaída encontrada!\n\n");
    else printf("\n\nNão existe um caminho para a saída!\n\n");

    return 0;
}