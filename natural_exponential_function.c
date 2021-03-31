// natural_exponential_function.c
// natural exponential function

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  float input;
  double factorial = 1.0;
  double euler = 1.0;
  double natural_exponential = 1;
  double natural_exponential_two;
  double count = 1.0;


  printf("%s", "輸入一個數值：");
  scanf("%f", &input);
  printf("%s\t%s\t%s\t%s\n", "次數", "階乘", "自然數", "自然指數");
  while (natural_exponential != natural_exponential_two) {
    natural_exponential_two = natural_exponential;
    factorial *= count;
    euler += 1 / factorial;
    natural_exponential += pow(input, count) / factorial;
    ++count;
  }
  printf("%.0f\t%.0f\t%1.51f\t%.51f\n", count, factorial, euler, natural_exponential);
}
