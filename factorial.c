// factorial.c
// factorial

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  double i = 1;
  double count;

  printf("%s", "輸入一個非負號的整數：");
  scanf("%d", &n);
  printf("%s\t%s\n", "階乘", "值");
  for (count = 1; count <= n; count++) {
    i = i * count;
    printf("%.0f\t%.0f\n", count, i);
  }
}
