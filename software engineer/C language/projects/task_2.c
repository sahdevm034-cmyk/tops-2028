#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // Seed the random number generator

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random number: %d\n", randomNumber);
    
    do{
      printf("guess the number");
      scanf("%d",&guessed);
      no_of_guesses++;
      if(guessed>randomNumber){
        printf("lower number please!\n");
      }
      else if (randomNumber>guessed){
        printf("higher number please!\n");
      }
      else{
        printf("congrats!\n");
      }
    } 
    while(guessed!=randomNumber);
    printf("you guessed the number in %d guesses",no_of_guesses);

    return 0;
}

