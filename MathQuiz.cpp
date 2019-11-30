//Prof notes: gj, ready for the app store.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * Assignment:  Math Quiz
  * Name: Justin Battles
  * Date:  2/26/2019
  */

int mult(int first, int second) {
 
  int answer = 0, correct = (first * second);

  printf("What is %d * %d?\n", first, second);

  scanf("%d", &answer);
  if (answer == correct) {
    printf("Correct\n");
    return 1;
   } else {
    printf("Wrong! Correct answer is: %d\n", correct);
    return 0;
   }
}

int add(int first, int second) {
 
  int answer = 0, correct = (first + second);

  printf("What is %d + %d?\n", first, second);

  scanf("%d", &answer);
  if (answer == correct) {
    printf("Correct\n");
    return 1;
   } else {
    printf("Wrong! Correct answer is: %d\n", correct);
    return 0;
   }
}

int sub(int first, int second) {
 
  int answer = 0, correct = (first - second);

  printf("What is %d - %d?\n", first, second);

  scanf("%d", &answer);
  if (answer == correct) {
    printf("Correct\n");
    return 1;
   } else {
    printf("Wrong! Correct answer is: %d\n", correct);
    return 0;
   }
}



int main(void) {

  int guesses = 10, total = 0;
  
  srand(time(NULL));
  
  for (int i = 0; i < guesses; i++) {
  int type = rand() % 3;
  int rand1 = rand() % 100 + 1;
  int rand2 = rand() % 100 + 1;  

    switch(type) {
      case 0:
	     total +=  mult(rand1, rand2);
	     break;
      case 1:
	     total += add(rand1, rand2);
	     break;
      case 2:
	     total += sub(rand1, rand2);
	     break;
    }

  } 
  
    printf("You got %d correct\n", total);
}
 
