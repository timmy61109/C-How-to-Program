// Fig. 3.10: fig03_10.c
// Analysis of examination results

#include <stdio.h>


int main(void) {
  unsigned int passes = 0;
  unsigned int failures = 0;
  unsigned int student = 1;
  int result;

  while (student <= 10) {
    printf_s("%s", "Enter result ( 1=pass, 2=fail): ");
    scanf("%d", &result);

    if (result == 1) {
      passes = passes + 1;

    } else {
      failures = failures + 1;

    }

    student = student + 1;

  }

  printf_s("Passed %u\n", passes);
  printf_s("Failed %u\n", failures);

  if ( passes > 8 ) {
    puts("Bonus to instuctor!");
  }

}
