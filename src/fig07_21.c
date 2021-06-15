// Fig. 7.21: fig07_21.c
// Copying a string using array notation and pointer notation.
#include <stdio.h>
#define SIZE 10

void copy1(char * const s1, const char * const s2);
void copy2(char *s1, const char *s2);

int main(void) {
  char string1[SIZE];
  char *string2 = "Hello";
  copy1(string1, string2);
  printf("string1 = %s\n", string1);

  char string3[SIZE];
  char string4[] = "Good Bye";

  copy2(string3, string4);
  printf("sring3 = %s\n", string3);
}

void copy1(char * const s1, const char * const s2) {
  for (size_t i = 0; (s1[i] = s2[i]) != '\0'; ++i) {
  }
}

void copy2(char *s1, const char *s2) {
  for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
  }
}
