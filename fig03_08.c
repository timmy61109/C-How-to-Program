// Fig. 3.8: fig08_08.c
// Class average program with sentinel-controlled iteration

#include <stdio.h>

int main(void) {
  unsigned int counter;
  int grade;
  int total;

  float average;

  total = 0;
  counter = 0;

  printf("%s", "Enter grade, -1 to end: ");
  scanf("%d", &grade);

  while (grade != -1) {
    total = total + grade;
    counter = counter + 1;

    printf("%s", "Enter grade, -1 to end: ");
    scanf("%d", &grade);
  }

  if (counter != 0) {
    average = (float) total / grade;

    printf("Class average is %f", average);

  } else {
    puts("No grade ware entered");
  }

}
