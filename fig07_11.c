// Fig. 7.11: fig07_11.c
// Converting a string to uppercase using a
// non-constant pointer to non-constant data.
#include <stdio.h>
#include <ctype.h>

void printCharacters(char *sPtr);

int main(void) {
  char string[] = "cHaRaCters and $32.98";

  printf("The string before conversion is: %s", string);
  printCharacters(string);
  printf("\nThe string after conversion is: %s\n", string);
}


void printCharacters(char *sPtr) {
  for (; *sPtr != '\0'; ++sPtr) {
    printf("%c\n", *sPtr);
  }
}
