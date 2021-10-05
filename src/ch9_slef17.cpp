// Ch. 9 Slef. 17: ch9_self17.c
// 試利用動態記憶體配置的方式，輸入兩個整數，並將他們存放在同一個整數陣列後，印出兩個整數相乘的結果。
#include <stdio.h>
#include <ctype.h>


int main() {
  const char *string = "wnkaMqd6wPt7cDSQd5tNsxK2\0";

  while (*string != '\0') {
    printf("%c", toupper(*string));
    string++;
  }
  puts("");
}
