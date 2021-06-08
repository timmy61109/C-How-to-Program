// Fig. 9.7: fig09_07.c
// Using the character and string conversion specifiers
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x = 12345;
  int * ptr = &x;

  printf("The value of ptr is %p\n", ptr);
  printf("The address of x is %p\n\n", &x);

  printf("Printing a %% in a format control string\n");
}
