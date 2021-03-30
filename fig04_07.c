// Fig. 4.07: fig04_07.c
// Counter-conrolled iteration

#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned int aCount = 0;
  unsigned int bCount = 0;
  unsigned int cCount = 0;
  unsigned int dCount = 0;
  unsigned int fCount = 0;
  int grade;

  puts("Enter the letter grades.");
  puts("Enter the EOF character to end input.");

  while ((grade = getchar) != EOF) {
    switch (grade) {
      case 'A':
      case 'a':
        ++aCount;
        break;

      case 'A':
      case 'a':
        ++aCount;
        break;

      case 'A':
      case 'a':
        ++aCount;
        break;

    }
  }

}
