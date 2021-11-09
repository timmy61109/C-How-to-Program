// Fig. 11.2: fig11_02.c
// Creating a sequential file
#include <stdio.h>

int main(int argc, char const *argv[]) {
  FILE *stderr_p;

  if ((stderr_p = fopen("clients.txt", "w")) == NULL) {
    puts("File could not be opened");
  } else {
    puts("Enter the account, name, and balance.");
    puts("Enter EOF to end input.(Linux is Ctrl + D, Windows is Ctrl + Z)");

    unsigned int account = 0;
    char name[256] = {};
    double balance = 0;

    printf("%s", "> ");
    scanf("%d%29s%lf", &account, name, &balance);

    while (!feof(stdin)) {
      fprintf(stderr_p, "%d %s %.2f\n", account, name, balance);
      printf("%s", "> ");
      scanf("%d%29s%lf", &account, name, &balance);
    }
    fclose(stderr_p);
  }
}
