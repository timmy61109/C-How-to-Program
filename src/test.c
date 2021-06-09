#include <stdio.h>
#include <stdlib.h>


int main(void) {
  float celsius;

  printf("%10s%10s\n", "Fahrenheit", "Celsius");
  for(float fahrenheit = 0; fahrenheit <= 212; ++fahrenheit) {
    celsius = ((float) 5 / 9) * (fahrenheit - 32);

    printf("%+10.3f%+10.3f\n", fahrenheit, celsius);

  }
}
