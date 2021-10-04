#include <stdio.h>
#include <ctype.h>


int main() {
  const char *string = "wnkaMqd6wPt7cDSQd5tNsxK2\0";

  while (*string != '\0') {
    printf("%c", toupper(*string));
    string++;
  }
  puts("");

}
