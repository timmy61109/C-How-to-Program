#include <iostream>
#include <stdio.h>
#include <string.h>
#include "ch13_self0.h"


int main() {
  user_data_t info = {
  };
  unsigned int choice = 119;
  while (choice != 5) {
    switch (choice) {
      case 1: {
        puts("database");
        BankUserClient::(info.target_data);
        break;
      }

      case 2: {
        puts("management");
        management(&info);
        break;
      }

      case 3: {
        puts("merge");
        merge(&info);
        break;
      }

      case 4: {
        puts("example");
        example(info.target_data);
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
  choice = init_menu();
  }
}
