// Fig. 10.11: fig11_11.c
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
  if ((cf_p = fopen("accounts.dat", "wb")) == NULL) {
    puts("File could not be opened.");

  } else {
    struct clientData client = {0, "", "", 0.0};

    printf("%s",
      "Enter account number"
      " (1 to 100, 0 to end input): "
    );
    scanf("%d", &client.acctNum);

    while (client.acctNum != 0) {
      printf("%s", "Enter lastname, firstname, balance: ");
      fscanf(stdin, "%14s%9s%lf",
        client.lastName, client.firstName, &client.balance);

      fseek(cf_p, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);
      fwrite(&client, sizeof(struct clientData), 1, cf_p);

      printf("%s",
        "Enter account number"
        " (1 to 100, 0 to end input): "
      );
      scanf("%d", &client.acctNum);

    }

    fclose(cf_p);
  }
}
