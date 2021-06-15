// Fig. 7.16: fig07_16.c
// Applying sizeof to an array name returns
// the number of bytes in the array.
#include <stdio.h>
#define SIZE 20

size_t get_size(float *ptr);

int main(void) {
  float array[SIZE];

  printf("The number of bytes in the array is %lu"
    "\nThe number of bytes returned by get_size is %lu\n",
    sizeof(array), get_size(array));

}

size_t get_size(float *ptr) {
  return sizeof(ptr);
}
