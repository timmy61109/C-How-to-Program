#include <stdio.h>

int main(void) {
  int grade;

  printf("Input your grade:");
  scanf("%d", &grade);
  if (grade >= 90) {
    puts("A");
  } else if (grade >= 80) {
    puts("B");
  } else if (grade >= 70) {
    puts("C");
  } else if (grade >= 60) {
    puts("D");
  } else {
    puts("F");
  }
}
