// Fig. 9.2: fig09_02.c
// Using the integer conversion specifiers
#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("%d\n", 445);
  printf("%i\n", 445);
  printf("%d\n", +445);
  printf("%d\n", -445);
  printf("%hd\n", 32000);
  printf("%ld\n", 2000000000L);
  printf("%o\n", 445);
  printf("%u\n", 445);
  printf("%u\n", -445);
  printf("%x\n", 445);
  printf("%x\n", 445);
}
