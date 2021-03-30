// factorial.c
// factorial

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  double radius = 4.0;
  int count = 1;
  double pi;

  printf("%s\t%s\n", "n項", "值");
  pi = radius;
  while (1 > 0) {
    pi += pow(-1, count) * ( radius / (2 * count + 1));

    if (pi = 3.141596) {
      printf("%d\t%2.30f\n", count, pi);
      break;
    }

    ++count;
  }
}
