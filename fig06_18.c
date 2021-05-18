// Fig. 6.18: fig06_18.c
// Linear search of an array.
#include <stdio.h>
#ifndef SIZE
#define SIZE 100
#endif

// function prototype
size_t linearSearch(const int array[], int key, size_t size);

int main(int argc, char const *argv[]) {
  int a[SIZE];

  for (size_t x = 0; x < SIZE; x++) {
    a[x] = 2 * x;

  }

  printf("Enter integer search key: ");
  int searchKey;
  scanf("%d", &searchKey);

  // attempt to locate searchKey in array a
  size_t index = linearSearch(a, searchKey, SIZE);


  // display results
  if (index != -1) {
    printf("Found value at index %lu\n", index);
  } else {
    puts("Value not found");
  }
}

// compare key to every element of array until the location is found
// or until the end of array is reached; return index of element
// if key is found or -1 if key is not found
size_t linearSearch(const int array[], int key, size_t size) {
  // loop through array
  for (size_t n = 0; n < size; n++) {
    if (array[n] == key) {
      return n;
    }
  }

  return -1;
}
