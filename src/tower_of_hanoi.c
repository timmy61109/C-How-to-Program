// tower_of_hanoi.c
// Tower of Hanoi
#include <stdio.h>

void tower_of_hanoi(int number, int a, int b, int c);

int main(void) {
  int number = 0;
  printf("%s", "Enter the number of plates: ");
  scanf("%d", &number);
  tower_of_hanoi(number, 1, 2, 3);
}


void tower_of_hanoi(int number, int a, int b, int c) {
  if (number == 1) {
    printf("Move sheet from %d to %d\n", a, c);
  } else {
    tower_of_hanoi(number - 1, a, c, b);
    tower_of_hanoi(1, a, b, c);
    tower_of_hanoi(number - 1, b, a, c);

  }
}
