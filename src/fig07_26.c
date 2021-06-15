// Fig. 7.26: fig07_26.c
//  Multipurpose sorting program using function pointers.
#include <stdio.h>
#define SIZE 10

void bubble(int work[], size_t size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);


int main(void) {
  // initalize array a
  int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

  printf("%s", "Enter 1 to sort in ascending order, \n"
    "Enter 2 to sort in descending order: ");
  int order;
  scanf("%d", &order);

  puts("\nData items in original order");

  // Loop through array a
  for (size_t i = 0; i < SIZE; ++i) {
    printf("%5d", a[i]);
  }

  if (order == 1) {
    bubble(a, SIZE, ascending);
    puts("\nData items in ascending order");
  } else {
    bubble(a, SIZE, descending);
    puts("\nData items in descending order");
  }


  puts("\nData items in ascending order");

  for (size_t i = 0; i < SIZE; ++i) {
    printf("%4d", a[i]);
  }

  puts("");
}

// sart an array of integers using bubble sort algorithm
void bubble(int * const array, const size_t size) {
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
