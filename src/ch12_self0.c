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
void print_data(vehicle_management_t *data_p, unsigned int count);
void print_row_data(vehicle_management_t data);
void write_data(char *name, vehicle_management_t *data_p, unsigned int count);
void write_row_data(char *name, vehicle_management_t data);
void read_data(char *name, vehicle_management_t *data_p, unsigned int count);
void export_csv(char *name, vehicle_management_t *data_p, unsigned int count);

// database
unsigned int database_menu();
void database(char *name);
void creat_database(char *name, unsigned int count);

// management
unsigned int management_meun();
void management(FILE * file_p, vehicle_management_t *data_p);
void keyin(vehicle_management_t *data, unsigned int count);
void insert(FILE * file_p, unsigned int count, vehicle_management_t *data, char *name);
void selete(FILE * file_p, unsigned int count);
void delete_form(FILE * file_p, unsigned int count);
void update(FILE * file_p, unsigned int count);

// print example data
void example(vehicle_management_t *data);

// merge
void merge(char *database_name_p, char *file_name_p, unsigned int count);
void search(vehicle_management_t *data);

int main() {
  FILE * file_p;
  vehicle_management_t data[SIZE];
  vehicle_management_t example_data[SIZE];
  char database_name;
  char file_name;
  unsigned int choice;
  printf("%s",
    "\nEnter request\n"
    " 1 - database\n"
    " 2 - management\n"
    " 3 - merge\n"
    " 4 - print example data\n"
    " 5 - end program\n"
  );
  while ((choice = init_menu()) != 5) {
    switch (choice) {
      case 1: {
        database(&database_name);
        break;
      }

      case 2: {
        management(file_p, data);
        break;
      }

      case 3: {
        merge(&database_name, &file_name, DATABASE);
        break;
      }

      case 4: {
        example(example_data);
        print_data(example_data, SIZE);
        break;
      }

      case 5: {
        puts("Bye Bye~");
        break;
      }

      default:
        puts("Incorrect choice");
        puts("Please enter function number.");
        break;
    }
  }
}

unsigned int init_menu() {
  printf("%s",
    "\n > "
  );
  unsigned int init_menu_choice;
  scanf("%u", &init_menu_choice);
  return init_menu_choice;
}

unsigned int management_meun() {
  printf("%s",
    "\n (management) >>> "
  );
  unsigned int management_menu_choice;
  scanf("%u", &management_menu_choice);
  return management_menu_choice;
}

void management(FILE * file_p, vehicle_management_t *data_p) {
  unsigned int choice;
  printf("%s",
    "\nEnter request\n"
    " 1 - keyin data\n"
    " 2 - store a formatted csv file of accounts called\n"
    " 3 - update an account\n"
    " 4 - add a new account\n"
    " 5 - delete an account\n"
    " 6 - end program\n\n > "
  );

  while ((choice = management_meun()) != 5) {
    switch (choice) {
      case 1: {
        keyin(data_p, DATABASE);
      }

      case 2: {
        char file_name;

        printf("%s", "Please keyin file name: ");
        scanf("%s", &file_name);
        export_csv(&file_name, data_p, DATABASE);
        break;
      }

      case 3: {
        insert(file_p, DATABASE, file_p);
        break;
      }


      case 4: {
        break;
      }

      case 5: {
        break;
      }

      case 6: {
        puts("Bye Bye~");
        break;
      }

      default: {
        puts("Incorrect choice");
        puts("Please enter function number.");
        break;
      }
    }
  }
}

void print_data(vehicle_management_t *data_p, unsigned int count) {
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

void example(vehicle_management_t *data) {
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

void read_data(char *name, vehicle_management_t *data_p, unsigned int count) {
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

unsigned int database_menu() {
  printf("%s", "\n (database) >>> ");
  unsigned int database_menu_choice;
  scanf("%u", &database_menu_choice);
  return database_menu_choice;
}

void database(char *name) {
  unsigned int choice;
  printf("%s",
    "\nEnter request\n"
    " 1 - create database, please keyin name\n"
    " 2 - exit database\n"
  );
  while ((choice = database_menu()) != 2) {
    switch (choice) {
      case 1:
        char database_name;

        printf("%s", "Please keyin database name: ");
        scanf("%s", &database_name);
        creat_database(&database_name, DATABASE);
        break;

      case 2: {
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

void creat_database(char *name, unsigned int count) {
  FILE *cf_p;
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

void insert(FILE * file_p, unsigned int count, char *name) {
  vehicle_management_t *data;
  puts("Enter the account, name, and balance.");
  puts("Enter EOF to end input.(Linux is Ctrl + D, Windows is Ctrl + Z)");
  while (!feof(stdin)) {
    printf("%s", " (insert) >>> ");
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

void selete(FILE * file_p, unsigned int count) {
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

void merge(char *database_name_p, char *file_name_p, unsigned int count) {
  vehicle_management_t data_p[count];

  read_data(file_name_p, data_p, count);
}
