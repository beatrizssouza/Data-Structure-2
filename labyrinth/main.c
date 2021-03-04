#include "labyrinth.c"

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
