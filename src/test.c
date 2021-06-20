// Fig. 10.13: fig10_13.c
// Using the bitwise shift operators
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reverse_bits(unsigned int number);
void displayBits(unsigned int value);

int main(void) {
  srand(time(NULL));
  unsigned int number = rand() % 4294967296;

  puts("\n原本的數字");
  displayBits(number);
  printf("\n%s %u %s %lu %s\n", "將數字", number, "在", (sizeof(number) * 8), "位元寬度進行Reverse Bits");
  reverse_bits(number);
}

void reverse_bits(unsigned int value) {
  void displayBits(unsigned int value);
  unsigned int bits = sizeof(value) * 8;
  unsigned int high = 0;
  unsigned int low = 0;
  for (unsigned int i = 1; i <= bits / 2; ++i) {
    high += (1 << (bits / 2 + (i - 1))) & (value << (i * 2 - 1));
    low += (1 << (bits / 2 - i)) & (value >> (i * 2 - 1));
  }
  displayBits(high + low);
}

void displayBits(unsigned int value) {
  unsigned int displayMask = 1 << 31;
  printf("%10u = ", value);
  for (unsigned int c = 1; c <= 32; ++c) {
    putchar(value & displayMask ? '1': '0');
    value <<= 1;
    if (c % 8 == 0) {
      putchar(' ');
    }
  }
  putchar('\n');
}
