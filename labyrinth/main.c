#include "labyrinth.h"

int main(){

  int MATRIX[T][T];

  char labyrinth[] = "lab.txt";
  loadmatrix(labyrinth, MATRIX);
  
  printmatrix(MATRIX);
  
  printf("\nposition:\n");
  if(search(MATRIX, 0, 0)) printf("\n\nexit found!\n\n");
  else printf("\n\nthere's no exit!\n\n");

  return 0;
}
