/*
ch12_self0.c
vehicle management
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3
#define DATABASE 500
#define LICENSE_PLATE 22
#define ENGINE 10
#define NAME 22
#define ID 12
#define PHONE_NUMBER 17
#define ADDR 6400
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
void database(vehicle_management_t *data_p);
void creat_database();
void use_database(vehicle_management_t *data_p);

// management
unsigned int management_meun();
void management(vehicle_management_t *data_p);
void export_csv(vehicle_management_t *data_p);
void insert(vehicle_management_t *data_p);
void selete(vehicle_management_t *data_p);
void drop(vehicle_management_t *data_p);
void update(vehicle_management_t *data_p);

// print example data
void example(vehicle_management_t *data_p);

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
  vehicle_management_t data[DATABASE];
  unsigned int count = DATABASE;
  creat_database();
  use_database(data);
  print_data(data, &count);
  insert(data);
  print_data(data, &count);
  update(data);
  print_data(data, &count);
  drop(data);
  print_data(data, &count);
  insert(data);
  insert(data);
  insert(data);
  print_data(data, &count);
  selete(data);
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

void database(vehicle_management_t *data_p) {
  unsigned int choice = 119;

  while (choice != 3) {
    switch (choice) {
      case 1:
        creat_database();
        break;

      case 2: {
        use_database(data_p);
        break;
      }

      case 3: {
        puts("Bye Bye~");
        break;
      }

      case 119: {
        printf("%s",
          "\nEnter request\n"
          " 1    create database, please keyin name\n"
          " 2    selete use database\n"
          " 3    exit database\n"
          " 119  help\n"
        );
        break;
      }

      default: {
        puts("Incorrect choice, Please enter function number.(1~3, help is 119)");
        break;
      }
    }
    choice = database_menu();
  }
}

void creat_database() {
  FILE *file_p;
  char database_name_p[50];
  vehicle_management_t database = {0, "", 0, "", "", "", "", "", 0};

  printf("%s", "Please keyin database name, data quantity: ");
  scanf("%s", database_name_p);

  if ((file_p = fopen(database_name_p, "wb")) == NULL) {
    puts("File could not be opened.");

  } else {

    for (size_t i = 0; i < DATABASE; i++) {
      fwrite(&database, sizeof(vehicle_management_t), 1, file_p);
    }
    printf("%s%s%s", "database ", database_name_p, " is success.\n");
  }
  fclose(file_p);
}

void use_database(vehicle_management_t *data_p) {
  FILE *file_p;
  unsigned int count = 0;
  char database_name_p[50];
  printf("%s", "Please keyin database name: ");
  scanf("%s", database_name_p);

  if ((file_p = fopen(database_name_p, "rb")) == NULL) {
    puts("File could not be opened.");

  } else {
    printf("%s\n", "compute file size...");

    while (!feof(file_p)) {
      fread(&data_p[count], sizeof(vehicle_management_t), 1, file_p);
      if (count < DATABASE) {
        count++;
      }
    }
    printf("%u\n", count);
  }
  fclose(file_p);
}

unsigned int management_meun() {
  printf("%s", "\n (management) > ");
  unsigned int management_menu_choice;
  scanf("%u", &management_menu_choice);
  return management_menu_choice;
}

void management(vehicle_management_t *data_p) {
  unsigned int count = DATABASE;
  print_data(data_p, &count);
  unsigned int choice = 119;
  while (choice != 6) {
    switch (choice) {
      case 1: {

        export_csv(data_p);
        break;
      }

      case 2: {
        selete(data_p);
      }

      case 3: {
        update(data_p);
        break;
      }

      case 4: {
        insert(data_p);
        break;
      }

      case 5: {
        drop(data_p);
        break;
      }

      case 6: {
        puts("Bye Bye~");
        break;
      }

      case 119: {
        printf("%s",
          "\nEnter request\n"
          " 1    store a formatted csv file of accounts called\n"
          " 2    selete an data\n"
          " 3    update an data\n"
          " 4    insert a new data\n"
          " 5    delete an data\n"
          " 6    end program\n"
          " 119  help\n"
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

void export_csv(vehicle_management_t *data_p) {
  unsigned int count = DATABASE;
  char file_name[50];
  printf("%s", "Please keyin file name: ");
  scanf("%s", file_name);
  write_data(file_name, data_p, &count);

}

void insert(vehicle_management_t *data_p) {
  unsigned int account = 0;
  unsigned int count = DATABASE;
  if (sizeof(data_p) == 0) {
    printf("%s\n", "Is not dat.");
  } else {
    printf("%s%u%s\n", "Enter account to update (1 - ", count, "): ");
    printf("%s", "\n (insert) >>> ");
    scanf("%d", &account);

    if (data_p[account - 1].number != 0) {
      printf("Account #%u already contains information.\n", data_p[account - 1].number);
      print_row_data(data_p[account - 1]);

    } else {
      data_p[account - 1].number = account;
      keyin_row(&data_p[account - 1]);
    }
  }
}

void selete(vehicle_management_t *data_p) {
  unsigned int count = DATABASE;
  printf("%s%u%s", "Enter name search (1 - ", count, ")\n");

  printf("%s", "\n (selete) >>> ");
  search(data_p, &count);
}

void drop(vehicle_management_t *data_p) {
  unsigned int account = 0;
  vehicle_management_t temp = {0, "", 0, "", "", "", "", "", 0};

  printf("%s%u%s\n", "Enter account to delete (1 - ", DATABASE, ")");
  printf("%s", "\n (delete) >>> ");
  scanf("%d", &account);

  if (data_p[account - 1].number == 0) {
    printf("Account %d does no exist.\n", account);

  } else {
    data_p[account - 1] = temp;
    puts("Delete success");
  }
}

void update(vehicle_management_t *data_p) {
  unsigned int count = DATABASE;
  unsigned int account = 0;

  printf("%s%u%s", "Enter number to update (1 - ", count, ")\n");
  printf("%s", "\n (update) >>> ");
  scanf("%d", &account);
  print_row_data(data_p[account - 1]);

  if (data_p[account - 1].number == 0) {
    printf("Account #%d has no information.\n", account);

  } else {
    data_p[account - 1].number = account;
    keyin_row(&data_p[account - 1]);
  }
}

void example(vehicle_management_t *data_p) {
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
  printf("%s", "\n輸入車牌：");
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
