// Fig. 10.14: fig11_14.c
// Create a random-access file sequentially
#include <stdio.h>

struct clientData {
  unsigned int acctNum;
  char lastName[15];
  char firstName[10];
  double balance;
};

int main(int argc, char const *argv[]) {
  FILE *cf_p;
  if ((cf_p = fopen("accounts.dat", "rb")) == NULL) {
    puts("File could not be opened.");

  } else {
    printf("%-6s%-16s%-11s%10s\n",
      "Acct", "Last Name", "First Name", "Balance");

    while (!feof(cf_p)) {
      struct clientData client = {0, "", "", 0.0};

      int result = fread(&client, sizeof(struct clientData), 1, cf_p);

      if (result != 0 && client.acctNum != 0) {
        printf("%-6d%-16s%-11s%10.2f\n",
          client.acctNum, client.lastName, client.firstName, client.balance);
      }
    }

    fclose(cf_p);
  }
}
