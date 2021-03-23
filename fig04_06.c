// Fig. 4.06: fig04_06.c
// Counter-conrolled iteration
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  double principal = 1000.0;
  double rate = 0.05;
  unsigned int year;
  double amount;

  printf("%4s%21s\n", "Year", "Amout on deposit");

  for (year = 1; year <= 10; ++year) {
    amount = principal * pow(1.0 + rate, year);

    printf("%4u%21.2f\n", year, amount);
  }
}
