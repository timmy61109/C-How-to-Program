#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3
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

void print_data(vehicle_management_t *data_p, unsigned int count);
void print_row_data(vehicle_management_t data);
void example_data(vehicle_management_t *data);
void keyin(vehicle_management_t *data, unsigned int count);
void search(vehicle_management_t *data);
void write_data(char *name, vehicle_management_t *data_p, unsigned int count);
void write_row_data(char *name, vehicle_management_t data);
void read_row_data();
void export_csv(char *name, vehicle_management_t *data_p, unsigned int count);
void creat_database(char *name, unsigned int count);
void insert(FILE * file_p, unsigned int count, vehicle_management_t *data, char *name);
void selete();
void delete_form(FILE * file_p, unsigned int count);
void update(FILE * file_p, unsigned int count);

int main() {
  vehicle_management_t in_data[SIZE];

  search(in_data);

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

unsigned int init() {
  printf("%s",
    "\nEnter request\n"
    " 1 - database\n"
    " 2 - vi\n"
    " 3 - merge\n"
    " 4 - print example data\n"
    " 4 - end program\n"
    "\n > "
  );
  unsigned int menuChoice;
  scanf("%u", &menuChoice);
  return menuChoice;
}

void print_data(vehicle_management_t *data_p, unsigned int count) {
  printf("%-10s%-22s%-15s%-10s%-12s%-17s%-64s%-22s%-20s\n",
    "number", "license plate", "engine number", "name", "ID",
    "phone number", "address", "datetime", "amount of money");
  for (size_t i = 0; i < count; i++) {
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

void example_data(vehicle_management_t *data) {
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
  for (size_t i = 0; i < SIZE; i++) {
    data[i] = create[i];
  }
}

void keyin(vehicle_management_t *data, unsigned int count) {

  for (size_t i = 0; i < count; i++) {
    printf("%s", "\n輸入編號：");
    scanf(" %u", &(data + i)->number);

    printf("%s", "輸入車牌：");
    scanf(" %[^\n]", (data + i)->license_plate);

    printf("%s", "輸入引擎編號：");
    scanf(" %u", &(data + i)->engine_number);

    printf("%s", "輸入姓名：");
    scanf(" %[^\n]", (data + i)->name);

    printf("%s", "輸入身份證字號：");
    scanf(" %[^\n]", (data + i)->id);

    printf("%s", "輸入電話：");
    scanf(" %[^\n]", (data + i)->phone_number);

    printf("%s", "輸入地址：");
    scanf(" %[^\n]", (data + i)->address);

    printf("%s", "輸入時間：");
    scanf(" %[^\n]", (data + i)->date);

    printf("%s", "輸入租金：");
    scanf(" %u", &(data + i)->amount_of_money);

  }
}

void search(vehicle_management_t *data) {
  char search_name[NAME];
  char *compare_name;
  printf("%s", "輸入搜尋姓名：");
  scanf(" %[^\n]", search_name);

  puts("");
  printf("\n%s%s\n\n", "姓名：", search_name);
  for (size_t i = 0; i < SIZE; i++) {
    compare_name = (data + i)->name;
    if (strcmp(compare_name ,search_name) == 0) {
      print_row_data(*(data + i));
      break;
    } else if ((i + 1) == SIZE) {
      printf("%s\n", "Search from database, not in.");
    }
  }
}

void write_data(char *name, vehicle_management_t *data_p, unsigned int count) {
  puts("File is write...");
  for (size_t i = 0; i < count; i++) {
    printf("%p row: %ld\n", &*(data_p + i), i);
    write_row_data(name, *(data_p + i));
  }
}

void write_row_data(char *name, vehicle_management_t data) {
  FILE *stderr_p;

  if ((stderr_p = fopen(name, "a")) == NULL) {
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

void read_row_data(char *name, vehicle_management_t *data_p, unsigned int count) {
  FILE *cf_p;

  if ((cf_p = fopen(name, "r")) == NULL) {
    puts("File could not be opened");
  } else {
    fscanf(cf_p, "%u%s%u%s%s%s%s%s%d",
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

    while (!feof(cf_p)) {
      fscanf(cf_p, "%u%s%u%s%s%s%s%s%d",
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
    }
    fclose(cf_p);
  }

}

void export_csv(char *name, vehicle_management_t *data_p, unsigned int count) {
  write_data(name, data_p, count);
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

void database(char *name) {
  FILE *cf_p;
  if ((cf_p = fopen(name, "rb+")) == NULL) {
    puts("File could not be opened.");

  } else {
    unsigned int choice;

    while ((choice = enterChoice()) != 5) {

      switch (choice) {
        case 1:
          char *database_name_p;

          scanf("%s", database_name_p);
          creat_database(cf_p, database_name_p, 10000);
          break;

        default:
          puts("\nPlease enter function number.");
          break;
      }
    }

    fclose(cf_p);
  }
}

void creat_database(FILE *cf_p, char *name, unsigned int count) {
  if ((cf_p = fopen(name, "wb")) == NULL) {
    puts("File could not be opened.");

  } else {
    vehicle_management_t database;

    for (size_t i = 0; i <= count; i++) {
      fwrite(&database, sizeof(vehicle_management_t), 1, cf_p);
    }

    fclose(cf_p);
  }
}

void insert(FILE * file_p, unsigned int count, vehicle_management_t *data, char *name) {
  puts("Enter the account, name, and balance.");
  puts("Enter EOF to end input.(Linux is Ctrl + D, Windows is Ctrl + Z)");
  while (!feof(stdin)) {
    printf("%s", "> ");
    printf("%s%u%s", "Enter account to update (1 - ", count, "): ");
    unsigned int account;
    scanf("%d", &account);
    fseek(file_p, (account - 1) * sizeof(vehicle_management_t), SEEK_SET);

    fread(data, sizeof(vehicle_management_t), 1, file_p);

    if (data->number != 0) {
      printf("Account #%u already contains information.\n", data->number);

    } else {
      keyin(data, count);

      fseek(file_p, (data->number - 1) * sizeof(vehicle_management_t), SEEK_SET);
      fwrite(&data, sizeof(vehicle_management_t), 1, file_p);
    }
  }

}

void selete() {
}

void delete_form(FILE * file_p, unsigned int count) {
  printf("%s%u%s", "Enter account to delete (1 - ", count, "): ");
  unsigned int account = 0;
  scanf("%d", &account);

  fseek(file_p, (account - 1) * sizeof(vehicle_management_t), SEEK_SET);

  vehicle_management_t data;

  fread(&data, sizeof(vehicle_management_t), 1, file_p);

  if (data.number == 0) {
    printf("Account %d does no exist.\n", account);

  } else {
    fseek(file_p, (account - 1) * sizeof(vehicle_management_t), SEEK_SET);
    vehicle_management_t data;
    fwrite(&data, sizeof(vehicle_management_t), 1, file_p);

    puts("Delete success");
  }
}

void update(FILE * file_p, unsigned int count) {
  printf("%s%u%s", "Enter account to update (1 - ", count, "): ");
  unsigned int account = 0;
  scanf("%d", &account);
  fseek(file_p, (account - 1) * sizeof(vehicle_management_t), SEEK_SET);

  vehicle_management_t data;
  fread(&data, sizeof(vehicle_management_t), 1, file_p);

  if (data.number == 0) {
    printf("Account #%d has no information.\n", account);

  } else {
    print_row_data(data);

    printf("%s", "Enter charge (+) or payment (-): ");
    double transaction;
    scanf("%lf", &transaction);
    data.amount_of_money += transaction;

    print_row_data(data);

    fseek(file_p, (account - 1) * sizeof(vehicle_management_t), SEEK_SET);
    fwrite(&data, sizeof(vehicle_management_t), 1, file_p);
  }
}

void merge(char *database_name_p, char *file_p) {
  read_data();
}
