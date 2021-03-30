// factorial.c
// factorial

#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned int n = 1;
  int count;

  printf("%s\t%s\n", "階乘", "值");
  for (count = 1; count <= 5; count++) {
    n = n * count;
    printf("%d\t%d\n", count, n);
  }
}
