// celsius_to_fahrenheit.c
// 攝氏轉華氏Celsius to Fahrenheit
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int celsius;
  float fahrenheit;

  printf("%8s%11s\n", "Celsius", "Fahrenheit");

  for (celsius = 30; celsius <= 50; celsius++) {
    fahrenheit = ((float) 9 / 5) * celsius + 32;

    printf("%8u%11.2f\n", celsius, fahrenheit);

  }
}
