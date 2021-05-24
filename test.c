#include <stdio.h>
#define SIZE 900


int main(int argc, char const *argv[]) {
  int reward[100];

  for (size_t i = 0; i < 100; ++i) {
    reward[i] = 200 + ((SIZE + i) * 0.09);
  }
  printf("$%d~%d: %d~%d\n", SIZE, SIZE + 99, reward[0], reward[99]);
}
