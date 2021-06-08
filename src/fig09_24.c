// Fig. 09.24: fig09_24.c
// inputting data with a field width
#include <stdio.h>

int main(void) {
  int month = 0;
  int day = 0;
  int year = - 0;

  printf("%s", "Enter a date in the from mm-dd-yyyy: ");
  scanf("%d%*c%d%*c%d", &month, &day, &year);
  printf("month = %d day = %d year = %d\n", month, day, year);

  printf("%s", "Enter a date in the from mm/dd/yyyy: ");
  scanf("%d%*c%d%*c%d", &month, &day, &year);
  printf("month = %d day = %d year = %d\n", month, day, year);

}
