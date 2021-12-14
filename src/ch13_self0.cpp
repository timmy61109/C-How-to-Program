#include <iostream>
#include <stdio.h>
#include <string.h>
#include "ch13_self0.h"


int main() {
  unsigned int choice = 119;

  puts("歡迎來到金門大學銀行 電子分行");

  while (choice != 5) {
    switch (choice) {
      case 1: {
        puts("database");
        BankUserClient::sign_up();
        break;
      }

      case 2: {
        puts("management");
        BankUserClient::sign_in();
        break;
      }

      case 3: {
        break;
      }

      case 4: {
        BankUserClient::example();
        break;
      }

      case 5: {
        puts("Bye Bye~");
        break;
      }

      case 119: {
        printf("%s",
          "\nEnter request\n"
          " 1    database\n"
          " 2    management\n"
          " 3    merge data\n"
          " 4    example data\n"
          " 5    end program\n"
          " 119  help\n"
        );
        break;
      }

      default: {
        puts("Incorrect choice, Please enter function number.(1~5, help is 119)");
        break;
      }
    }
  choice = BankUserClient::init_menu();
  }
}
