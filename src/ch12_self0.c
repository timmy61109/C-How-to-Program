/*
ch12_self0.c
vehicle management
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3
#define DATABASE 10000
#define LICENSE_PLATE 22
#define ENGINE 10
#define NAME 22
#define ID 12
#define PHONE_NUMBER 17
#define ADDR 2000 * 32
#define DATE 22
#define MONEY 22

typedef struct {
  unsigned int number;
  char license_plate[LICENSE_PLATE];
  unsigned int engine_number;
  char name[NAME];
  char id[ID];
  char phone_number[PHONE_NUMBER];
  char address[ADDR];
  char date[DATE];
  int amount_of_money;
} vehicle_management_t;

unsigned int init_menu();

// database
unsigned int database_menu();
void database(FILE *file_p, char *database_name_p, unsigned int *count_p);
void creat_database(FILE *file_p, char *database_name_p, unsigned int *count_p);
void use_database(FILE *file_p, char *database_name_p, unsigned int *count_p);

// management
unsigned int management_meun();
void management(FILE *file_p, unsigned int *count_p,
  vehicle_management_t *data_p, char *file_name_p);
void export_csv(unsigned int *count_p,
  vehicle_management_t *data_p, char *file_name_p);
void insert(FILE *file_p, unsigned int *count_p, vehicle_management_t *data_p);
void selete(FILE *file_p, unsigned int *count_p, vehicle_management_t *data_p);
void drop(FILE *file_p, unsigned int *count_p, vehicle_management_t *data_p);
void update(FILE *file_p, unsigned int *count_p, vehicle_management_t *data_p);

// print example data
void example(vehicle_management_t *data_p, unsigned int *count_p);

// file merge to database
void merge_menu();
void merge(char *file_name_p, char *database_name_p, unsigned int *count_p);
void file_merge_database(char *file_name_p, char *database_name_p, unsigned int *count_p);
void database_merge_file(char *file_name_p, char *database_name_p, unsigned int *count_p);

// Share function
void keyin(vehicle_management_t *data_p, unsigned int *count_p);
void keyin_row(vehicle_management_t *data_row_p);
void search(vehicle_management_t *data_p, unsigned int *count_p);
void print_data(vehicle_management_t *data_p, unsigned int *count_p);
void print_row_data(vehicle_management_t data);
void write_data(char *file_name_p, vehicle_management_t *data_p, unsigned int *count_p);
void write_row_data(char *file_name_p, vehicle_management_t data);
void read_data(char *file_name_p, vehicle_management_t *data_p, unsigned int *count_p);

int main() {
  FILE file;
  FILE *file_p = &file;
  vehicle_management_t data_p[DATABASE];
  vehicle_management_t example_data_p[SIZE];
  unsigned int *count_p = 0;
  char *database_name_p = (char*) "";
  char *file_name_p = (char*) "";
  unsigned int choice = 9;

  while (choice != 5) {
    switch (choice) {
      case 1: {
        database(file_p, database_name_p, count_p);
        break;
      }

      case 2: {
        management(file_p, count_p, data_p, file_name_p);
        break;
      }

      case 3: {
        merge(database_name_p, file_name_p, count_p);
        break;
      }

      case 4: {
        example(example_data_p, count_p);
        print_data(example_data_p, count_p);
        break;
      }

      case 5: {
        fclose(file_p);

        puts("Bye Bye~");
        break;
      }

      case 9: {
        printf("%s",
          "\nEnter request\n"
          " 1 - database\n"
          " 2 - management\n"
          " 3 - file merge to database\n"
          " 4 - print example data\n"
          " 5 - end program\n"
          " 9 - help\n"
        );
      }

      default:
        puts("Incorrect choice");
        puts("Please enter function number.(1~9)");
        break;
    }
    choice = init_menu();
  }
}

unsigned int init_menu() {
  printf("%s", "\n > ");
  unsigned int init_menu_choice;
  scanf("%u", &init_menu_choice);
  return init_menu_choice;
}

unsigned int database_menu() {
  printf("%s", "\n (database) > ");
  unsigned int database_menu_choice;
  scanf("%u", &database_menu_choice);
  return database_menu_choice;
}

void database(FILE *file_p, char *database_name_p, unsigned int *count_p) {
  unsigned int choice;
  printf("%s",
    "\nEnter request\n"
    " 1 - create database, please keyin name\n"
    " 2 - selete use database\n"
    " 3 - exit database\n"
  );
  while ((choice = database_menu()) != 2) {
    switch (choice) {
      case 1:

        printf("%s", "Please keyin database name, data quantity: ");
        scanf("%s%u", database_name_p, count_p);
        creat_database(file_p, database_name_p, count_p);
        break;

      case 2: {
        use_database(file_p, database_name_p, count_p);
        break;
      }

      case 3: {
        puts("Bye Bye~");
        break;
      }

      default: {
        puts("\nPlease enter function number.");
        break;
      }
    }
  }
}

void creat_database(FILE *file_p, char *database_name_p, unsigned int *count_p) {
  if ((file_p = fopen(database_name_p, "wb")) == NULL) {
    puts("File could not be opened.");

  } else {
    vehicle_management_t database = {0, "", 0, "", "", "", "", "", 0};

    for (size_t i = 0; i <= *count_p; i++) {
      fwrite(&database, sizeof(vehicle_management_t), 1, file_p);
    }

    fclose(file_p);
  }
}

void use_database(FILE *file_p, char *database_name_p, unsigned int *count_p) {
  fclose(file_p);
  *count_p = 0;
  if ((file_p = fopen(database_name_p, "rb")) == NULL) {
    puts("File could not be opened.");

  } else {
    printf("%s\n", "compute file size...");
    *count_p = sizeof(file_p) / sizeof(vehicle_management_t);
    printf("%u\n", *count_p);
  }
}

unsigned int management_meun() {
  printf("%s", "\n (management) > \n");
  unsigned int management_menu_choice;
  scanf("%u", &management_menu_choice);
  return management_menu_choice;
}

void management(FILE *file_p, unsigned int *count_p,
    vehicle_management_t *data_p, char *file_name_p) {

  unsigned int choice = 9;
  while (choice != 5) {
    switch (choice) {
      case 1: {
        printf("%s", "Please keyin file name: ");
        scanf("%s", file_name_p);
        export_csv(count_p, data_p, file_name_p);
        break;
      }

      case 2: {
        selete(file_p, count_p, data_p);
      }

      case 3: {
        update(file_p, count_p, data_p);
        break;
      }


      case 4: {
        insert(file_p, count_p, data_p);
        break;
      }

      case 5: {
        drop(file_p, count_p, data_p);
        break;
      }

      case 6: {
        puts("Bye Bye~");
        break;
      }

      case 9: {
        printf("%s",
          "\nEnter request\n"
          " 1 - store a formatted csv file of accounts called\n"
          " 2 - selete an data\n"
          " 3 - update an data\n"
          " 4 - insert a new data\n"
          " 5 - delete an data\n"
          " 6 - end program\n"
          " 9 - help\n"
        );
      }

      default: {
        puts("Incorrect choice, please enter function number.");
        break;
      }
    }
    choice = management_meun();
  }
}

void export_csv(unsigned int *count_p,
  vehicle_management_t *data_p, char *file_name_p) {
  write_data(file_name_p, data_p, count_p);
}

void insert(FILE *file_p, unsigned int *count_p, vehicle_management_t *data_p) {
  puts("Enter EOF to end input.(Linux is Ctrl + D, Windows is Ctrl + Z)");
  printf("%s%u%s\n", "Enter account to update (1 - ", *count_p, "): ");
  while (!feof(stdin)) {
    printf("%s", "\n (insert) >>> \n");
    unsigned int account;
    scanf("%d", &account);
    fseek(file_p, (account - 1) * sizeof(vehicle_management_t), SEEK_SET);

    fread(data_p, sizeof(vehicle_management_t), 1, file_p);

    if (data_p->number != 0) {
      printf("Account #%u already contains information.\n", data_p->number);

    } else {
      vehicle_management_t data;
      keyin_row(&data);

      fseek(file_p, (data_p->number - 1) * sizeof(vehicle_management_t), SEEK_SET);
      fwrite(&data, sizeof(vehicle_management_t), 1, file_p);
    }
  }
}

void selete(FILE *file_p, unsigned int *count_p, vehicle_management_t *data_p) {
  printf("%s%u%s", "Enter name search (1 - ", *count_p, ")\n");
  unsigned int account = 0;
  scanf("%d", &account);
  fseek(file_p, (account - 1) * sizeof(vehicle_management_t), SEEK_SET);

  vehicle_management_t data;
  fread(&data, sizeof(vehicle_management_t), 1, file_p);

  if (data.number == 0) {
    printf("Account #%d has no information.\n", account);

  } else {
    printf("%s", "\n (selete) >>> \n");
    search(data_p, count_p);
  }

}

void drop(FILE *file_p, unsigned int *count_p, vehicle_management_t *data_p) {
  printf("%s%u%s\n", "Enter account to delete (1 - ", *count_p, ")");
  printf("%s", "\n (delete) >>> \n");
  unsigned int account = 0;
  scanf("%d", &account);

  fseek(file_p, (account - 1) * sizeof(vehicle_management_t), SEEK_SET);

  vehicle_management_t data;

  fread(&data, sizeof(vehicle_management_t), 1, file_p);

  if (data.number == 0) {
    printf("Account %d does no exist.\n", account);

  } else {
    fseek(file_p, (account - 1) * sizeof(vehicle_management_t), SEEK_SET);
    vehicle_management_t data = {0, "", 0, "", "", "", "", "", 0};
    fwrite(&data, sizeof(vehicle_management_t), 1, file_p);

    puts("Delete success");
  }
}

void update(FILE *file_p, unsigned int *count_p, vehicle_management_t *data_p) {
  unsigned int account = 0;
  scanf("%d", &account);
  fseek(file_p, (account - 1) * sizeof(vehicle_management_t), SEEK_SET);

  vehicle_management_t data;
  fread(&data, sizeof(vehicle_management_t), 1, file_p);

  if (data.number == 0) {
    printf("Account #%d has no information.\n", account);

  } else {
    print_row_data(data);

    printf("%s%u%s", "Enter number to update (1 - ", *count_p, ")\n");
    printf("%s", "\n (delete) >>> \n");
    keyin_row(&data);

    print_row_data(data);

    fseek(file_p, (account - 1) * sizeof(vehicle_management_t), SEEK_SET);
    fwrite(&data, sizeof(vehicle_management_t), 1, file_p);
  }
}

void example(vehicle_management_t *data_p, unsigned int *count_p) {
  *count_p = SIZE;
  vehicle_management_t create[SIZE] = {
    {
      1,
      "2432-6962-0262-2139",
      21086155,
      "甯庭佳",
      "J257823365",
      "+886 976041644",
      "457 新北市雙溪區大灣七街二段335巷144弄740號13樓",
      "Februa 18, 1988",
      73200
    }, {
      2,
      "5295-7162-0442-0867",
      31312262,
      "司婉安",
      "Q214131854",
      "+886 923402560",
      "374-80 基隆市中正區通明街六段553巷966弄277號44樓",
      "July 4, 1936",
      65800
    }, {
      3,
      "2432-6962-0262-2139",
      69848125,
      "姜雅涵",
      "E129441704",
      "+886 959404352",
      "670 高雄市左營區吉利四街350號",
      "February 2, 1999",
      114900
    }
  };
  for (size_t i = 0; i < *count_p; i++) {
    data_p[i] = create[i];
  }
}

void merge_menu() {
}

void merge(char *file_name_p, char *database_name_p, unsigned int *count_p) {
  // vehicle_management_t data_p[*count_p];

  // read_data(file_name_p, data_p, count_p);
}

void file_merge_database(
    char *file_name_p, char *database_name_p, unsigned int *count_p) {
}

void database_merge_file(
    char *file_name_p, char *database_name_p, unsigned int *count_p) {
}

void keyin(vehicle_management_t *data_p, unsigned int *count_p) {

  for (size_t i = 0; i < *count_p; i++) {
    keyin_row((data_p + i));

  }
}

void keyin_row(vehicle_management_t *data_row_p) {
  printf("%s", "\n輸入編號：");
  scanf(" %u", &data_row_p->number);

  printf("%s", "輸入車牌：");
  scanf(" %[^\n]", data_row_p->license_plate);

  printf("%s", "輸入引擎編號：");
  scanf(" %u", &data_row_p->engine_number);

  printf("%s", "輸入姓名：");
  scanf(" %[^\n]", data_row_p->name);

  printf("%s", "輸入身份證字號：");
  scanf(" %[^\n]", data_row_p->id);

  printf("%s", "輸入電話：");
  scanf(" %[^\n]", data_row_p->phone_number);

  printf("%s", "輸入地址：");
  scanf(" %[^\n]", data_row_p->address);

  printf("%s", "輸入時間：");
  scanf(" %[^\n]", data_row_p->date);

  printf("%s", "輸入租金：");
  scanf(" %u", &data_row_p->amount_of_money);

}

void search(vehicle_management_t *data_p, unsigned int *count_p) {
  char search_name[NAME];
  vehicle_management_t null = {0, "", 0, "", "", "", "", "", 0};
  vehicle_management_t temp[*count_p];
  scanf(" %[^\n]", search_name);

  puts("");
  printf("\n%s%s\n\n", "姓名：", search_name);
  for (size_t i = 0; i < *count_p; i++) {
    if (strcmp((data_p + i)->name ,search_name) == 0) {
      *(temp + i) = *(data_p + i);
      print_row_data(*(data_p + i));
      print_row_data(*(temp + i));
      break;
    } else if ((i + 1) == *count_p) {
      printf("%s\n", "Search from database, not in.");
    } else {
      *(temp + i) = null;
      print_row_data(*(temp + i));
    }
  }
}

void print_data(vehicle_management_t *data_p, unsigned int *count_p) {
  for (size_t i = 0; i < *count_p; i++) {
    printf("%p\n", &*(data_p + i));
    print_row_data(*(data_p + i));
  }
}

void print_row_data(vehicle_management_t data) {
  printf("%-10u%-22s%-15u%-10s%-12s%-17s%-64s%-22s%-20u\n",
    data.number,
    data.license_plate,
    data.engine_number,
    data.name,
    data.id,
    data.phone_number,
    data.address,
    data.date,
    data.amount_of_money
  );
}

void write_data(char *file_name_p, vehicle_management_t *data_p, unsigned int *count_p) {
  puts("File is write...");
  for (size_t i = 0; i < *count_p; i++) {
    printf("%p row: %ld\n", &*(data_p + i), i);
    write_row_data(file_name_p, *(data_p + i));
  }
}

void write_row_data(char *file_name_p, vehicle_management_t data) {
  FILE *stderr_p;

  if ((stderr_p = fopen(file_name_p, "a")) == NULL) {
    puts("File could not be opened");
  } else {
    fprintf(stderr_p, "%u, %s, %u, %s, %s, %s, %s, %s, %u\n",
      data.number,
      data.license_plate,
      data.engine_number,
      data.name,
      data.id,
      data.phone_number,
      data.address,
      data.date,
      data.amount_of_money
    );
    fclose(stderr_p);
  }
}

void read_data(char *file_name_p, vehicle_management_t *data_p, unsigned int *count_p) {
  FILE *file_p;
  count_p = 0;

  if ((file_p = fopen(file_name_p, "r")) == NULL) {
    puts("File could not be opened");

  } else {
    fscanf(file_p, "%u%s%u%s%s%s%s%s%d",
      &data_p->number,
      data_p->license_plate,
      &data_p->engine_number,
      data_p->name,
      data_p->id,
      data_p->phone_number,
      data_p->address,
      data_p->date,
      &data_p->amount_of_money
    );
    data_p++;
    count_p++;
    printf("%u\n", *count_p);

    while (!feof(file_p)) {
      fscanf(file_p, "%u%s%u%s%s%s%s%s%d",
        &data_p->number,
        data_p->license_plate,
        &data_p->engine_number,
        data_p->name,
        data_p->id,
        data_p->phone_number,
        data_p->address,
        data_p->date,
        &data_p->amount_of_money
      );
      data_p++;
      count_p++;
      printf("%u\n", *count_p);
    }
    fclose(file_p);
  }

}
