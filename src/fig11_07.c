// Fig. 11.7: fig11_07.c
// Creat inquiry program
#include <stdio.h>

int main(int argc, char const *argv[]) {
  FILE *stderr_p;

  if ((stderr_p = fopen("clients.txt", "r")) == NULL) {
    puts("File could not be opened");

  } else {

    printf("%s",
      "Enter request\n"
      " 1 - List accounts with zero balances\n"
      " 2 - List accounts with credit balances\n"
      " 3 - List accounts with debit balances\n"
      " 4 - End of run?\n"
    );
    unsigned int request = 0;

    while (request != 4) {
      unsigned int account = 0;
      char name[256] = {};
      double balance = 0;

      printf("%s", "\n> ");
      scanf("%d", &request);
      fscanf(stderr_p, "%d%29s%lf", &account, name, &balance);

      switch (request) {
        case 1: {
          puts("\nAccounts with zero balances\n");

          while (!feof(stderr_p)) {
            if (balance == 0) {
              printf("%-10d%-13s%7.2f\n", account, name, balance);
            }
            fscanf(stderr_p, "%d%29s%lf", &account, name, &balance);
          }
          break;
        }

        case 2: {
          puts("\nAccounts with credit balances\n");

          while (!feof(stderr_p)) {
            if (balance < 0) {
              printf("%-10d%-13s%7.2f\n", account, name, balance);
            }
            fscanf(stderr_p, "%d%29s%lf", &account, name, &balance);
          }
          break;
        }

        case 3: {
          puts("\nAccounts with debit balances\n");

          while (!feof(stderr_p)) {
            if (balance > 0) {
              printf("%-10d%-13s%7.2f\n", account, name, balance);
            }
            fscanf(stderr_p, "%d%29s%lf", &account, name, &balance);
          }
          break;
        }
        default: {
          puts("\nPlease enter function number.");

          break;
        }

      }

      rewind(stderr_p);

    }

    puts("End of run.");
    fclose(stderr_p);

  }
}
