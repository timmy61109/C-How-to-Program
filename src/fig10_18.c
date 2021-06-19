// Fig. 10.18: fig10_18.c
// Using an enumeration
#include <stdio.h>

enum months{
  JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main(void) {
  const char *monthName[] = {
    "",
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
  };

  for (size_t month = JAN; month <= DEC; ++month) {
    printf("%2lu%11s\n", month, monthName[month]);
  }
}
