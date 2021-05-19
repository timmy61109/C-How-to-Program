// Selection Sort: selection_sort.c
// 時間複雜度為 O(n²) 的演算法，代表著執行步驟會跟著輸入 n 成次方比例的增加。
// 最基礎的排序法之一：選擇排序法(Selection Sort) 是 O(n²) 複雜度的代表。

#include <stdio.h>
#ifndef SIZE
#define SIZE 12
#endif

// function prototype
void selection_sort(int array[], size_t size);

int main(int argc, char const *argv[]) {
  int a[SIZE] = {50, 25, 76, 38, 19, 58, 29, 88, 44, 22, 11, 34};

  // attempt to locate searchKey in array a
  selection_sort(a, SIZE);

}

void selection_sort(int array[], size_t size) {
  int tmp;
  for (size_t n = 0; n < size; n++) {
    for (size_t j = n + 1; j < size; j++) {
      if (array[n] > array[j]) {
        tmp = array[n];
        array[n] = array[j];
        array[j] = tmp;
      }
    }
  }


  for (size_t i = 0; i < SIZE; i++) {
    printf("%d ", array[i]);
  }

}
