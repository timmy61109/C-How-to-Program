// Fig. 3.13: fig03_013.c
// Class average program with sentinel-controlled iteration

#include <stdio.h>

// function main begins program execution
int main(int argc, char const *argv[]) {
  int c;

  c = 5;
  printf_s("%d\n", c);
  printf_s("%d\n", c++);
  printf_s("%d\n\n", c);

  c = 5;
  printf_s("%d\n", c);
  printf_s("%d\n", ++c);
  printf_s("%d\n\n", c);

}
