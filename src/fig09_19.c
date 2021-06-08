// Fig. o.19: fig09_19.c
// Reading input with floating-point conversion
#include <stdio.h>

// functon main begins program execution
int main(void) {
  double a;
  double b;
  double c;

  puts("Enter three floating-point numbers:");
  scanf("%le%lf%lg", &a, &b, &c);

  printf("\nHere are the numbers entered in plain");
  puts("floating-point noation:");
  printf("%f\n%f\n%f\n", a, b, c);
}
