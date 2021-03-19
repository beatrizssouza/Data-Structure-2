#include <stdio.h>
#include "boxOffice.h"
#include "header.h"

float getProfit(char* archive){
  FILE* file = fopen(archive, "r");   
  if(file == NULL) return -1;

  int numberOfRows, numberOfPeople;
  
  fscanf(file,"%d", &numberOfRows);
  if(numberOfRows > 1000 || numberOfRows < 1) return -1;
  
  fscanf(file,"%d", &numberOfPeople);
  if(numberOfPeople > 1000 || numberOfPeople < 1) return -1;
  
  int* seatsPerRow = createQueue(numberOfRows);
  
  for(int i = 0; i < numberOfRows; i++) fscanf(file,"%d", &seatsPerRow[i]);
  
  buildMinHeap(seatsPerRow, numberOfRows);
  
  return calculateProfit(seatsPerRow, numberOfRows, numberOfPeople);
};

float calculateProfit(int* seatsPerRow, int numberOfRows, int numberOfPeople){
    float profit = 0;
    while(numberOfPeople > 0){
      int leastSeatsRow = getFirstElement(seatsPerRow, numberOfRows);
      numberOfRows = removeMinElement(seatsPerRow, numberOfRows);
      while(leastSeatsRow > 0 && numberOfPeople > 0){
        profit += 100 + (float)100 / leastSeatsRow;
        leastSeatsRow--;
        numberOfPeople--;
      }
    }
  return profit;
};