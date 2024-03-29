/*
ch12_self0.c
vehicle management
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ch12_self0.c"
#define SIZE 3
#define DATABASE 300
#define LICENSE_PLATE 22
#define ENGINE 10
#define NAME 22
#define ID 12
#define PHONE_NUMBER 17
#define ADDR 6400
#define DATE 22
#define MONEY 22

int main() {

}

unsigned int init_menu_test() {
  printf("%s", "\n > ");
  unsigned int init_menu_choice;
  scanf("%u", &init_menu_choice);
  return init_menu_choice;
}

unsigned int database_menu_test() {
  printf("%s", "\n (database) > ");
  unsigned int database_menu_choice;
  scanf("%u", &database_menu_choice);
  return database_menu_choice;
}

void database_test(vehicle_management_t *data_p) {
  unsigned int choice = 119;

  while (choice != 4) {
    switch (choice) {
      case 1:
        creat_database();
        break;

      case 2: {
        use_database(data_p);
        break;
      }

      case 3: {
        close_database(data_p);
        break;
      }

      case 4: {
        puts("Bye Bye~");
        break;
      }

      case 119: {
        printf("%s",
          "\nEnter request\n"
          " 1    create database, please keyin name\n"
          " 2    selete use database\n"
          " 3    close database\n"
          " 4    exit\n"
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

void creat_database_test() {
  FILE *file_p;
  char database_name[50];
  vehicle_management_t database = {0, "null", 0, "null", "null", "null", "null", "null", 0};

  printf("%s", "Please keyin database name, data quantity: ");
  scanf("%s", database_name);

  if ((file_p = fopen(database_name, "wb")) == NULL) {
    puts("File could not be opened.");

  } else {

    for (size_t i = 0; i < DATABASE; i++) {
      fwrite(&database, sizeof(vehicle_management_t), 1, file_p);
    }
    printf("%s%s%s", "database ", database_name, " is success.\n");
  }
  fclose(file_p);
}

void use_database_test(vehicle_management_t *data_p) {
  FILE *file_p;
  unsigned int count = 0;
  char database_name[50];
  printf("%s", "Please keyin database name: ");
  scanf("%s", database_name);

  if ((file_p = fopen(database_name, "rb")) == NULL) {
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
  printf("%s%s%s\n", "use ", database_name, " database");
}

void close_database_test(vehicle_management_t *data_p) {
  FILE *file_p;
  char database_name_p[50];
  printf("%s", "Please keyin database name: ");
  scanf("%s", database_name_p);

  if ((file_p = fopen(database_name_p, "rb+")) == NULL) {
    puts("File could not be opened.");

  } else {
    printf("%s\n", "svae file...");

    for (size_t i = 0; i < DATABASE; i++) {
      fseek(file_p, i * sizeof(vehicle_management_t), SEEK_SET);
      fwrite(&data_p[i], sizeof(vehicle_management_t), 1, file_p);
    }
  }
  fclose(file_p);
  printf("%s%s%s", "database ", database_name_p, " is success.\n");
}

unsigned int management_meun_test() {
  printf("%s", "\n (management) > ");
  unsigned int management_menu_choice;
  scanf("%u", &management_menu_choice);
  return management_menu_choice;
}

void management_test(vehicle_management_t *data_p) {
  unsigned int count = DATABASE;
  unsigned int choice = 119;
  while (choice != 7) {
    switch (choice) {
      case 1: {

        export_csv(data_p);
        break;
      }

      case 2: {
        selete(data_p);
        break;
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
        for (size_t i = 0; i < count; i++) {
          if (data_p[i].number != 0) {
            print_row_data(data_p[i]);
          }
        }
        break;
      }

      case 7: {
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
          " 6    print data\n"
          " 7    end program\n"
          " 119  help\n"
        );
        break;
      }

      default: {
        puts("Incorrect choice, please enter function number.");
        break;
      }
    }
    choice = management_meun();
  }
}

void export_csv_test(vehicle_management_t *data_p) {
  unsigned int count = DATABASE;
  char file_name[50];
  printf("%s", "Please keyin file name: ");
  scanf("%s", file_name);
  write_data(file_name, data_p, &count);

}

void insert_test(vehicle_management_t *data_p) {
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

void selete_test(vehicle_management_t *data_p) {
  unsigned int count = DATABASE;
  printf("%s%u%s", "Enter name search (1 - ", count, ")\n");

  printf("%s", "\n (selete) >>> ");
  search(data_p);
}

void drop_test(vehicle_management_t *data_p) {
  unsigned int account = 0;
  vehicle_management_t temp = {0, "null", 0, "null", "null", "null", "null", "null", 0};

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

void update_test(vehicle_management_t *data_p) {
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

void example_test(vehicle_management_t *data_p) {
  vehicle_management_t create[SIZE] = {
    {
      1,
      "5132-8093-6999-5158",
      21086155,
      "Lory L. Hash",
      "J262986562",
      "+1 7022986198",
      "673 Cooks Mine Road Albuquerque NM 87108",
      "January 17 1978",
      73200
    }, {
      2,
      "5255-7185-6812-4208",
      39416756,
      "賀曉彤",
      "Q214131854",
      "+1 2149393884",
      "4713 Deercove Drive Dallas TX 75202",
      "November 1 1938",
      812000
    }, {
      3,
      "4916-1212-9727-7104",
      20138697,
      "Donna J. Johnson",
      "E129441704",
      "+1 6016561902",
      "670 高雄市左營區吉利四街400號",
      "February 2 1999",
      114900
    }
  };
  for (size_t i = 0; i < SIZE; i++) {
    data_p[i] = create[i];
  }
}

unsigned int merge_menu_test() {
  printf("%s", "\n (merge) > ");
  unsigned int merge_menu_choice;
  scanf("%u", &merge_menu_choice);
  return merge_menu_choice;
}

void merge_test(file_argc_t *info_p) {
  char database_name[50];
  char file_name[50];
  unsigned int choice = 119;
  printf("%s", "Please keyin database name, data quantity: ");
  scanf("%s", database_name);
  printf("%s", "Please keyin file name: ");
  scanf("%s", file_name);

  for (size_t i = 0; i < 50; i++) {
    info_p->file_name[i] = file_name[i];
    info_p->database_name[i] = database_name[i];
  }
  while (choice != 4) {
    switch (choice) {
      case 1: {

        file_merge_data(info_p);
        break;
      }

      case 2: {
        data_merge_file(info_p);
        break;
      }

      case 3: {
        puts("Bye Bye~");
        break;
      }

      case 119: {
        printf("%s",
          "\nEnter request\n"
          " 1    file merge to data\n"
          " 2    data merge to file\n"
          " 3    exit\n"
          " 119  help\n"
        );
        break;
      }

      default: {
        puts("Incorrect choice, please enter function number.");
        break;
      }
    }
    choice = management_meun();
  }

}

void file_merge_data_test(file_argc_t *info_p) {
  vehicle_management_t data[DATABASE];
  file_argc_t info = {
    "test.csv",
    "test.dat",
    DATABASE,
  };
  use_database(data);
  for (size_t i = 0; i < DATABASE; i++) {
    info.database_data[i] = data[i];
  }
  file_merge_data(&info);
}

void data_merge_file_test(file_argc_t *info_p) {
  read_data(info_p);
}

void keyin_test(vehicle_management_t *data_p, unsigned int *count_p) {

  for (size_t i = 0; i < *count_p; i++) {
    keyin_row((data_p + i));

  }
}

void keyin_row_test(vehicle_management_t *data_row_p) {
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
  scanf(" %[^\n,\"]", data_row_p->address);

  printf("%s", "輸入時間：");
  scanf(" %[^\n,\"]", data_row_p->date);

  printf("%s", "輸入租金：");
  scanf(" %u", &data_row_p->amount_of_money);

}

void search_test(vehicle_management_t *data_p) {
  vehicle_management_t null = {0, "null", 0, "null", "null", "null", "null", "null", 0};
  char search_name[NAME];
  unsigned int count = 0;
  scanf(" %[^\n]", search_name);

  printf("\n\n%s%s\n\n", "姓名：", search_name);
  for (size_t i = 0; i < DATABASE; i++) {
    if (strcmp((data_p + i)->name, search_name) == 0) {
      if (data_p[count].number == 0) {
        data_p[count] = data_p[i];
        data_p[count].number = count + 1;
        data_p[i] = null;
        count++;
      }
    } else if (i < DATABASE) {
      data_p[i] = null;

    } else if ((i + 1) == DATABASE) {
      printf("%s\n", "Search from database, not in.");
    }
  }
}

void print_data_test(vehicle_management_t *data_p, unsigned int *count_p) {
  for (size_t i = 0; i < *count_p; i++) {
    printf("%p\n", &*(data_p + i));
    print_row_data(*(data_p + i));
  }
}

void print_row_data_test(vehicle_management_t data) {
  printf("%-10u%-22s%-15u%-20s%-12s%-17s%-64s%-22s%-20u\n",
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

void write_data_test(char *file_name_p, vehicle_management_t *data_p, unsigned int *count_p) {
  FILE *file_p;
  puts("File is write...");
  if ((file_p = fopen(file_name_p, "w")) == NULL) {
    puts("File could not be opened");
  } else {
    fclose(file_p);
    for (size_t i = 0; i < *count_p; i++) {
      write_row_data(file_name_p, *(data_p + i));
    }
    printf("%p row: %u\n", &*(data_p + (*count_p - 1)), *count_p);
  }
}

void write_row_data_test(char *file_name_p, vehicle_management_t data) {
  FILE *file_p;

  if ((file_p = fopen(file_name_p, "a")) == NULL) {
    puts("File could not be opened");
  } else {
    fprintf(file_p, "%u,\"%s\",%u,\"%s\",\"%s\",\"%s\",\"%s\",\"%s\",%u\n",
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
    fclose(file_p);
  }
}

void read_data_test(file_argc_t *info_p) {
  FILE *file_p;
  unsigned int count = 0;
  char line[7000];
  char *cut;

  if ((file_p = fopen(info_p->file_name, "r")) == NULL) {
    puts("File could not be opened");

  } else {
    printf("%s\n", "compute file size...");

    while (fgets(line, DATABASE, file_p) != NULL) {
      cut = strtok(line, ",");
      info_p->file_data[count].number = atoi(cut);

      cut = strtok(NULL, "\",");
      strcpy(info_p->file_data[count].license_plate, cut);

      cut = strtok(NULL, ",\"");
      info_p->file_data[count].engine_number = atoi(cut);

      cut = strtok(NULL, "\",\"");
      strcpy(info_p->file_data[count].name, cut);

      cut = strtok(NULL, "\",\"");
      strcpy(info_p->file_data[count].id, cut);

      cut = strtok(NULL, "\",\"");
      strcpy(info_p->file_data[count].phone_number, cut);

      cut = strtok(NULL, "\",\"");
      strcpy(info_p->file_data[count].address, cut);

      cut = strtok(NULL, "\",");
      strcpy(info_p->file_data[count].date, cut);

      cut = strtok(NULL, ",\"");
      info_p->file_data[count].amount_of_money = atoi(cut);

      if (info_p->file_data[count].number != 0) {
        print_row_data(info_p->file_data[count]);
      }

      if (count < DATABASE) {
        count++;
      }
    }
    info_p->count = count;
  }
}

int compare_test() {
  unsigned int _compare = 0;
  vehicle_management_t data[DATABASE];
  file_argc_t info = {
    "test.csv",
    "test.dat",
    DATABASE,
  };
  use_database(data);

  for (size_t i = 0; i < info.count; i++) {
    for (size_t j = 0; j < info.count; j++) {
      _compare = compare(info.database_data[j], info.file_data[i]);
    }
    if ((info.database_data[i].number == 0) && _compare) {
      info.database_data[i] = info.file_data[i];

    } else {
      for (size_t k = 0; k < (info.count - i); k++) {
        if (info.database_data[i].number == 0) {
          info.database_data[i] = info.file_data[i];
        }
      }
    }
  }
}
