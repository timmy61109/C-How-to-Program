// Fig. 10.10: fig11_10.c
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
    struct clientData blankClien = {0, "", "", 0.0};
    for (size_t i = 0; i <= 1000; i++) {
      fwrite(&blankClien, sizeof(struct clientData), 1, cf_p);
    }

    fclose(cf_p);
  }
}
