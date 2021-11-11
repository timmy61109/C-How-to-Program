// Fig. 11.6: fig11_06.c
// Creating a sequential file
#include <stdio.h>

int main(int argc, char const *argv[]) {
  FILE *stderr_p;

  if ((stderr_p = fopen("clients.txt", "r")) == NULL) {
    puts("File could not be opened");
  } else {
    unsigned int account = 0;
    char name[256] = {};
    double balance = 0;

    printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
    fscanf(stderr_p, "%d%29s%lf", &account, name, &balance);

    while (!feof(stderr_p)) {
      printf("%-10d%-13s%7.2f\n", account, name, balance);
      fscanf(stderr_p, "%d%29s%lf", &account, name, &balance);
    }
    fclose(stderr_p);
  }
}
