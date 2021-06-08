// Fig. 4.09: fig04_09.c
// Counter-conrolled iteration

#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned int counter = 1;

  do {
    printf("%u\t", counter);
  } while(++counter <= 10);
}
