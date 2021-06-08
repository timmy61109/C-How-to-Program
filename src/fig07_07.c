// Fig. 7.6: fig07_07.c
// Cube a variable using pass-by-reference.
#include <stdio.h>

void cubeByReference(int *nPtr);

int main(void) {
  int number = 5;
  printf("Theoriginal value of number is %d", number);

  // pass number by value to cubeByReference
  cubeByReference(&number);
  printf("\nThe now value of number is %d\n", number);
}


// calculate and return cube of integer argument
void cubeByReference(int *nPtr) {
  *nPtr =  *nPtr * *nPtr * *nPtr;
}
