#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int iAsks, iCount, iRand1, iRand2, iAnswer;
  int iCorrect = 0;
  srand(time(NULL));
  
  printf("How many questions you want to answer? ");
  scanf("%d", &iAsks);
  iCount = 0;
  while(iCount != iAsks){
    iRand1 = rand() % 100 + 1;
    iRand2 = rand() % 100 + 1;
    printf("What is %d + %d? ", iRand1, iRand2);
    scanf("%d", &iAnswer);
    if(iAnswer == iRand1 + iRand2){
      printf("Correct!\n");
      iCorrect++;
    }
    else{
      printf("Wrong! The correct answer is %d\n", iRand1 + iRand2);
    }
    iCount++;
  }
  printf("You got %d out of %d correct.\n", iCorrect, iAsks);
  return 0;



}



