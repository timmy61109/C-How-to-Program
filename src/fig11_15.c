// Fig. 10.14: fig11_14.c
// Transaction-processing program reads a random-access file sequentially,
// updates data already written to the file, creates new data to
// be placed in the file, and deletes data previously in the file.
#include <stdio.h>

struct clientData {
  unsigned int acctNum;
  char lastName[15];
  char firstName[10];
  double balance;
};

unsigned int enterChoice();
void textFile(FILE * read_p);
void updateRecord(FILE * read_p);
void deleteRecord(FILE * read_p);
void newRecord(FILE * read_p);

int main(int argc, char const *argv[]) {
  FILE *cf_p;
  if ((cf_p = fopen("accounts.dat", "rb+")) == NULL) {
    puts("File could not be opened.");

  } else {
    unsigned int choice;

    while ((choice = enterChoice()) != 5) {
      switch (choice) {
        case 1:
          textFile(cf_p);
          break;

        case 2:
          updateRecord(cf_p);
          break;

        case 3:
          newRecord(cf_p);
          break;

        case 4:
          deleteRecord(cf_p);
          break;

        case 5:
          puts("Incorrect choice");
          break;

        default:
          puts("\nPlease enter function number.");
          break;
      }
    }

    fclose(cf_p);
  }
}

unsigned int enterChoice() {
  printf("%s",
    "\nEnter request\n"
    " 1 - store a formatted text file of accounts called\n"
    "     \"accounts.txt\" for rinting\n"
    " 2 - update an account\n"
    " 3 - add a new account\n"
    " 4 - delete an account\n"
    " 5 - end program\n\n > "
  );
  unsigned int menuChoice;
  scanf("%u", &menuChoice);
  return menuChoice;
}

void textFile(FILE * read_p) {
  FILE *write_p;

  if ((write_p = fopen("accounts.txt", "w")) == NULL) {
    puts("File could not be opened");

  } else {
    rewind(read_p);
    fprintf(write_p, "%-6s%-16s%-11s%10s\n",
      "Acct", "Last Name", "First Name", "Balance");
    printf("%-6s%-16s%-11s%10s\n",
      "Acct", "Last Name", "First Name", "Balance");

    while (!feof(read_p)) {
      struct clientData client = {0, "", "", 0.0};
      int result = fread(&client, sizeof(struct clientData), 1, read_p);

      if (result != 0 && client.acctNum != 0) {
        fprintf(write_p, "%-6d%-16s%-11s%10.2f\n",
          client.acctNum, client.lastName, client.firstName, client.balance);
        printf("%-6d%-16s%-11s%10.2f\n",
          client.acctNum, client.lastName, client.firstName, client.balance);
      }

    }
    fclose(write_p);
  }
}

void updateRecord(FILE * file_p) {
  printf("%s", "Enter account to update (1 - Inf): ");
  unsigned int account = 0;
  scanf("%d", &account);
  fseek(file_p, (account - 1) * sizeof(struct clientData), SEEK_SET);

  struct clientData client = {0, "", "", 0.0};
  fread(&client, sizeof(struct clientData), 1, file_p);

  if (client.acctNum == 0) {
    printf("Account #%d has no information.\n", account);

  } else {
    printf("%-6d%-16s%-11s%10.2f\n",
      client.acctNum, client.lastName, client.firstName, client.balance);

    printf("%s", "Enter charge (+) or payment (-): ");
    double transaction;
    scanf("%lf", &transaction);
    client.balance += transaction;

    printf("%-6d%-16s%-11s%10.2f\n",
      client.acctNum, client.lastName, client.firstName, client.balance);

    fseek(file_p, (account - 1) * sizeof(struct clientData), SEEK_SET);
    fwrite(&client, sizeof(struct clientData), 1, file_p);
  }
}

void deleteRecord(FILE * file_p) {
  printf("%s", "Enter account to delete (1 - Inf): ");
  unsigned int account = 0;
  scanf("%d", &account);

  fseek(file_p, (account - 1) * sizeof(struct clientData), SEEK_SET);

  struct clientData client;

  fread(&client, sizeof(struct clientData), 1, file_p);

  if (client.acctNum == 0) {
    printf("Account %d does no exist.\n", account);

  } else {
    fseek(file_p, (account - 1) * sizeof(struct clientData), SEEK_SET);
    struct clientData blankClient = {0, "", "", 0.0};
    fwrite(&blankClient, sizeof(struct clientData), 1, file_p);

    puts("Delete success");
  }
}

void newRecord(FILE * file_p) {
  printf("%s", "Enter account to update (1 - Inf): ");
  unsigned int account;
  scanf("%d", &account);
  fseek(file_p, (account - 1) * sizeof(struct clientData), SEEK_SET);

  struct clientData client = {0, "", "", 0.0};
  fread(&client, sizeof(struct clientData), 1, file_p);

  if (client.acctNum != 0) {
    printf("Account #%d already contains information.\n", client.acctNum);

  } else {
    printf("%s", "Enter lastname, firstname, balance\n\n (add) >>> ");
    scanf("%14s%9s%lf",
      client.lastName, client.firstName, &client.balance);

    client.acctNum = account;

    fseek(file_p, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);
    fwrite(&client, sizeof(struct clientData), 1, file_p);
  }
}
