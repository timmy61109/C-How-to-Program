// Fig. 3.8: fig08_08.c
// Class average program with sentinel-controlled iteration

#include <stdio.h>

int main(void) {
  unsigned int counter;
  int grade;
  int total;
  int average;

  total = 0;
  counter = 1;

  while (counter <= 10) {
    printf("%s", "Enter grade: ");
    scanf("%d", &grade);
    total = total + grade;
    counter = counter + 1;
    /* code */
  }

  average = total / 10;

  printf("Class average is %d\n", average);
}
