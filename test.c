#include <stdio.h>

int main(void) {
  int n;
  int sum;
  int square;
  int cube;
  int count;

  sum = 0;
  square = 0;
  cube = 0;

  printf("%s", "輸入一個非負號的整數：");
  scanf("%d", &n);
  printf("%s\t%s\t%s\n", "總和", "平方和", "立方和");
  for (count = 1; count <= n; count++) {
    sum += count;
    square += count * count;
    cube += count * count * count;
  }
  printf("%d\t%d\t%d\n", sum, square, cube);
}
