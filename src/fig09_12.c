// Fig. 9.12: fig09_12.c
// Printing positive and negative numbers with and without the + flag
#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("%d\n%d\n", 786, -786);
  printf("%+d\n%+d\n", 786, -786);
}
