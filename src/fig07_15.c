// Fig. 7.15: fig07_15.c
// Putting values into an array, sorting the values into
// ascending order, and printing the resulting array.
#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array, const size_t size);

int main(void) {
  // initalize array a
  int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

  puts("Data items in original order");

  // Loop through array a
  for (size_t i = 0; i < SIZE; ++i) {
    printf("%4d", a[i]);
  }

  bubbleSort(a, SIZE);

  puts("\nData items in ascending order");

  for (size_t i = 0; i < SIZE; ++i) {
    printf("%4d", a[i]);
  }

  puts("");
}

// sart an array of integers using bubble sort algorithm
void bubbleSort(int * const array, const size_t size) {
  void swap(int *element1Ptr, int *element2Ptr); // prototype

  // Loop to control passes
  for (unsigned int pass = 0; pass <size -1; ++pass) {
    for (size_t j = 0; j < size -1; ++j) {
      if (array[j] > array[j + 1]) {
        swap(&array[j], &array[j + 1]);
      }
    }
  }
}

void swap(int *element1Ptr, int *element2Ptr) {
  int hold = *element1Ptr;
  *element1Ptr = *element2Ptr;
  *element2Ptr = hold;
}
