// guess_the_number.c
// Guess the number

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
  unsigned int rand_number = 0;
  unsigned int guess_number = 0;
  char again;

  srand(time(NULL));

  rand_number = (rand() % 1000) + 1;

  printf("%s", "I have a number between 1 and 1000. Can you guess my number?\n\n");

  while(guess_number != rand_number) {
    printf("%s", "Please type your first guess: ");
    scanf("%u", &guess_number);

    if (1000 < guess_number || guess_number < 0) {
      printf("%s\n\n", "Please input number 0~1000");

    } else if (guess_number == rand_number) {
      printf("%s\n\n", "Excellent! You guessed the number!");

      while (guess_number == rand_number) {
        printf("%s", "Would you like to play again?(y or n)");
        scanf("%s", &again);

        if (again == 'y') {
          rand_number = (rand() % 1000) + 1;

        } else if (again == 'n') {
          guess_number = rand_number;
          break;

        } else {
          printf("%s\n", "Please input \"y\" or \"n\"!");

        }
      }

    } else if (guess_number <= rand_number) {
      printf("%s\n", "Too low, Try again.");

    } else if (guess_number >= rand_number) {
      printf("%s\n", "Too high, Try again.");

    }
  }
}
