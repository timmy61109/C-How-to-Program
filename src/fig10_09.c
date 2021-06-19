// Fig. 10.9: fig10_09.c
// Using the bitwise AND, bitwise inclusive OR, bitwise
// exclusive OR and bitwise complement operators
#include <stdio.h>

void displayBits(unsigned int value);

int main(void) {
  unsigned int number1 = 65535;
  unsigned int mask = 1;
  puts("The result of combining the following");
  displayBits(number1);
  displayBits(mask);
  puts("using the bitwise AND operator & is");
  displayBits(number1 & mask);

  number1 = 15;
  unsigned int setBit = 241;
  puts("\nThe result of combining the following");
  displayBits(number1);
  displayBits(setBit);
  puts("using the bitwise OR operator | is");
  displayBits(number1 | setBit);

  number1 = 139;
  unsigned int number2 = 199;
  puts("\nThe result of combining the following");
  displayBits(number1);
  displayBits(number2);
  puts("using the bitwise exclusive OR operator ^ is");
  displayBits(number1 ^ number2);

  number1 = 21845;
  puts("\nThe one's combining the following");
  displayBits(number1);
  puts("is");
  displayBits(~number1);

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
