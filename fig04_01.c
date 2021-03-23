// Fig. 4.01: fig04_01.c
// Counter-conrolled iteration

#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned int count;
  while (count <= 10) {
    printf_s("%u\n", count);
    ++count;
  }
}
