// Fig. 7.17: fig07_17.c
// Using operator sizeof to determine standard data type sizes.
#include <stdio.h>

int main(void) {
  char c;
  short s;
  int i;
  long l;
  long long ll;
  float f;
  double d;
  long double ld;
  int array[20];
  int *ptr = array;

  printf("%-12s%s%lu\t%-19s%s%lu\n", "sizeof c", " = ", sizeof(c), "sizeof(char)", " = ", sizeof(char));
  printf("%-12s%s%lu\t%-19s%s%lu\n", "sizeof s", " = ", sizeof(s), "sizeof(short)", " = ", sizeof(short));
  printf("%-12s%s%lu\t%-19s%s%lu\n", "sizeof i", " = ", sizeof(i), "sizeof(int)", " = ", sizeof(int));
  printf("%-12s%s%lu\t%-19s%s%lu\n", "sizeof l", " = ", sizeof(l), "sizeof(long)", " = ", sizeof(long));
  printf("%-12s%s%lu\t%-19s%s%lu\n", "sizeof ll", " = ", sizeof(ll), "sizeof(long long)", " = ", sizeof(long long));
  printf("%-12s%s%lu\t%-19s%s%lu\n", "sizeof f", " = ", sizeof(f), "sizeof(float)", " = ", sizeof(float));
  printf("%-12s%s%lu\t%-19s%s%lu\n", "sizeof d", " = ", sizeof(d), "sizeof(double)", " = ", sizeof(double));
  printf("%-12s%s%lu\t%-19s%s%lu\n", "sizeof ld", " = ", sizeof(ld), "sizeof(long double)", " = ", sizeof(long double));
  printf("%-12s%s%lu\n", "sizeof array", " = ", sizeof(array));
  printf("%-12s%s%lu\n", "sizeof ptr", " = ", sizeof(ptr));
}
