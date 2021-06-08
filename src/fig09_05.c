// Fig. 9.5: fig09_05.c
// Using the character and string conversion specifiers
#include <stdio.h>

int main(int argc, char const *argv[]) {
  char character = 'A';
  printf("%c\n", character);
  printf("%s\n", "This is a string");
  char string[] = "This is a string";
  printf("%s\n", string);
  const char stringPtr[] = "This is also a string";
  printf("%s\n", stringPtr);
}
