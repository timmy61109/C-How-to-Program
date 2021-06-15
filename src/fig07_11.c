// Fig. 7.11: fig07_11.c
// Converting a string to uppercase using a
// non-constant pointer to non-constant data.
#include <stdio.h>
#include <ctype.h>

void printCharacters(const char *sPtr);

int main(void) {
  char string[] = "print characters of a string";

  puts("The string is: ");
  printCharacters(string);
  puts("");
}


void printCharacters(const char *sPtr) {
  for (; *sPtr != '\0'; ++sPtr) {
    printf("%c", *sPtr);
  }
}
