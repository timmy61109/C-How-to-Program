#include <stdio.h>
#include <stdlib.h>


int main(void) {
  puts("\n(a)\n");
  printf("%15s\n", "123456789012345");
  printf("%.8d\n", 40000);

  int x;
  puts("\n(b)\n");
  printf("輸入十六進制數值(ex. 0x123 or 123): ");
  scanf("%x", &x);
  printf("%#x\n", x);

  puts("\n(c)\n");
  printf("%d\n", 200);
  printf("%+d\n", 200);

  puts("\n(d)\n");
  printf("%#x\n", 256);

  puts("\n(e)\n");
  char s[15];
  printf("%s", "Enter string: ");
  scanf(" %15[^p]", s);
  printf("The input was \"%s\"\n", s);
  scanf("%[^\n]", s);

  puts("\n(f)\n");
  printf("%09g\n", 1.234);

  puts("\n(g)\n");
  int hour = 0;
  int minute = 0;
  int second = 0;
  printf("%s", "Enter a date in the from hh:mm:ss : ");
  scanf(" %d%*c%d%*c%d", &hour, &minute, &second);
  printf("hour = %.2d minute = %.2d second = %.2d\n", hour, minute, second);

  puts("\n(h)\n");
  printf("%s", "Please input \"characters\": ");
  scanf(" %*1[\"]%15[a-zA-Z0-9]%*1[\"]", s);
  printf("%s\n", s);
  scanf("%[^\n]", s);

  puts("\n(i)\n");
  hour = 0;
  minute = 0;
  second = 0;
  printf("%s", "Enter a date in the from hh:mm:ss : ");
  scanf(" %d:%d:%d", &hour, &minute, &second);
  printf("hour = %.2d minute = %.2d second = %.2d\n", hour, minute, second);

}
