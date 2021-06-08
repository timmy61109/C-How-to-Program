// euler_s.c
// euler's

#include <stdio.h>

int main(int argc, char const *argv[]) {
  double factorial = 1.0;
  double euler = 1.0;
  double euler_two;
  double count = 1.0;

  printf("%s\t%s\t%s\n", "次數", "階乘", "值");
  while (euler != euler_two) {
    euler_two = euler;
    factorial *= count;
    euler += 1 / factorial;
    ++count;
  }
  printf("%.0f\t%.0f\t%1.51f\n", count, factorial, euler);
}
