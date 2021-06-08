// Fig. 09.21: fig09_21.c
// Using an inverted scan set
#include <stdio.h>

int main(void) {
  char z[9];
  printf("%s", "Enter a string: ");
  scanf("%8[^aeiou]", z);
  printf("The input was \"%s\"\n", z);

}
