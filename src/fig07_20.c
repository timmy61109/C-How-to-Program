// Fig. 7.20: fig07_20.cpp
// Using indexing and pointer notations with arrays.
#include <stdio.h>
#define ARRAY_SIZE 4

int main(void) {
  int b[] = {10, 20, 30, 40};
  int *bPtr = b;

  puts("Array b printed with :\nArray index notation");

  for (size_t i = 0; i < ARRAY_SIZE; ++i) {
    printf("b[%lu] = %d\n", i, b[i]);

  }

  puts("\nPointer/offset notation where\n"
    "the pointer is the array name");

  for (size_t offset = 0; offset < ARRAY_SIZE; ++offset) {
    printf("*(b + %lu) = %d\n", offset, *(b + offset));
  }

  puts("\nPointer index notation");

  for (size_t i = 0; i < ARRAY_SIZE; ++i) {
    printf("bPtr[%lu] = %d\n", i, bPtr[i]);
  }

  puts("\nPointer/offset notation");

  for (size_t offset = 0; offset < ARRAY_SIZE; ++offset) {
    printf("*(bPtr + %lu) = %d\n", offset, *(bPtr + offset));
  }
}
