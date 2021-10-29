// Fig 7.4: fig07_04.c
// Using the & and * pointer operators.
#include <stdio.h>


int main(int argc, char const *argv[]) {
  int a = 7;
  int *aPrt = &a;

  printf("The address of a is %p"
        "\nThe value of aPtr is %p", &a, aPrt);

  printf("\n\nThe value of a is %d"
        "\nThe value of *aPtr is %d", a, *aPrt);

  printf("\n\nThe value of a is %i"
        "\nThe value of *aPtr is", a != *aPrt);

  printf("\n\nShowing that * and & are complements of"
        "each other\n&*aPrt = %p"
        "\n*&aPtr = %p\n", &*aPrt, *&aPrt);
}
