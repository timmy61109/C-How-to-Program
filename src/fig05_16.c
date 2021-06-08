// Fig. 5.16: fig05_16.c
// Scoping
#include <stdio.h>

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1;

int main(int argc, char const *argv[]) {
  int x = 5;

  printf("local x in outer scope of main is %d\n", x);

  {
    int x = 7;
    printf("local x in inner scope of main is %d\n", x);
  }

  printf("local x in outer scope of main is %d\n", x);

  useLocal();
  useStaticLocal();
  useGlobal();
  useLocal();
  useStaticLocal();
  useGlobal();

  printf("\nlocal x in main is %d\n", x);

}

void useLocal(void) {
  int x = 25;

  printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
  ++x;
  printf("local x in useLocal is %d before exiting useLocal\n", x);
}

void useStaticLocal(void) {
  static int x = 50;

  printf("\nlocal x in useStaticLocal is %d after entering useStaticLocal\n", x);
  ++x;
  printf("local x in useStaticLocal is %d before exiting useStaticLocal\n", x);
}

void useGlobal(void) {
  printf("\nlocal x in useGlobal is %d after entering useGlobal\n", x);
  x *= 10;
  printf("local x in useGlobal is %d before exiting useGlobal\n", x);
}
