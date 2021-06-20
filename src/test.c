#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int reverse_bits(unsigned int number);
void displayBits(unsigned int value);

int main(void) {
  srand(time(NULL));
  unsigned int number = (unsigned int) ( rand() * 3.141592654) % rand() % 4294967296;

  puts("\n原本的數字");
  displayBits(number);
  printf("\n%s %u %s %lu %s\n", "將數字", number, "在", sizeof(number) * 8, "位元寬度進行Reverse Bits");
  displayBits(reverse_bits(number));
}

unsigned int reverse_bits(unsigned int value) {
  unsigned int bits = sizeof(value) * 8;
  unsigned mask = 1;
  unsigned temp = 0;

  for(size_t i = 0; i <= bits - 1; i++) {
    temp <<= 1;
    temp |= (value & mask);
    value >>= 1;
  }
  return temp;
}

void displayBits(unsigned int value) {
  unsigned int bits = sizeof(value) * 8;
  unsigned int displayMask = 1 << (bits - 1);
  printf("%20u = ", value);
  for (unsigned int c = 1; c <= bits; ++c) {
    value & displayMask ? putchar('1'): putchar('0');
    value <<= 1;
    if (c % 8 == 0) {
      putchar(' ');
    }
  }
  putchar('\n');
}
