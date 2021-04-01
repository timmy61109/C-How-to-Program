#include <stdio.h>

int main(void) {
  int value;

  scanf("%d", &value);
  value %= 2;

  switch (value) {
    case 0:
      puts("Event integer");
      break;

    case !0:
      puts("Odd integer");
      break;
  }


}
