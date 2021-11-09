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
  char *license_plate = (char*) "";
  char *engine_number = (char*) "";
  char *name = (char*) "";
  char *id = (char*) "";
  char *phone_number = (char*) "";
  char *address = (char*) "";
  char *date = (char*) "";
  char *amount_of_money = (char*) "";
} vehicle_management_t;

void print_data(vehicle_management_t *data);
void print_row_data(vehicle_management_t data);
void search(vehicle_management_t *data);
void example_data(vehicle_management_t *data);
void input_data(vehicle_management_t *data);
void write_data(vehicle_management_t *data_p, size_t count);
void write_row_data(vehicle_management_t data);

int main() {
  vehicle_management_t in_data[SIZE];
  vehicle_management_t example[SIZE];

  example_data(example);
  printf("%s\n\n", "The is Example.");
  print_data(example);
  input_data(in_data);
  printf("\n%s\n\n", "The is key in data.");
  print_data(in_data);
  write_data(in_data, SIZE);

  search(in_data);

}

void print_data(vehicle_management_t *data_p) {
  for (size_t i = 0; i < SIZE; i++) {
    printf("%p\n", &*(data_p + i));
    print_row_data(*(data_p + i));
  }
}

void print_row_data(vehicle_management_t data) {
  printf("%s%s\n", "車牌：", data.license_plate);
  printf("%s%s\n", "引擎編號：", data.engine_number);
  printf("%s%s\n", "姓名：", data.name);
  printf("%s%s\n", "身份證字號：", data.id);
  printf("%s%s\n", "電話：", data.phone_number);
  printf("%s%s\n", "地址：", data.address);
  printf("%s%s\n", "時間：", data.date);
  printf("%s%s\n\n", "租金：", data.amount_of_money);

}

void example_data(vehicle_management_t *data) {
  vehicle_management_t create[SIZE] = {
    {
      (char*) "2432-6962-0262-2139",
      (char*) "21086155",
      (char*) "甯庭佳",
      (char*) "J257823365",
      (char*) "+886 976041644",
      (char*) "457 新北市雙溪區大灣七街二段335巷144弄740號13樓",
      (char*) "Februaunsigned int *account, char *name, double *balancery 18, 1988",
      (char*) "73200"
    }, {
      (char*) "5295-7162-0442-0867",
      (char*) "31312262",
      (char*) "司婉安",
      (char*) "Q214131854",
      (char*) "+886 923402560",
      (char*) "374-80 基隆市中正區通明街六段553巷966弄277號44樓",
      (char*) "July 4, 1936",
      (char*) "65800"
    }, {
      (char*) "2432-6962-0262-2139",
      (char*) "69848125",
      (char*) "姜雅涵",
      (char*) "E129441704",
      (char*) "+886 959404352",
      (char*) "670 高雄市左營區吉利四街350號",
      (char*) "February 2, 1999",
      (char*) "114900"
    }
  };
  for (size_t i = 0; i < SIZE; i++) {
    data[i] = create[i];
  }
}

void input_data(vehicle_management_t *data) {
  char license_plate[SIZE][LICENSE_PLATE];
  char engine_number[SIZE][ENGINE];
  char name[SIZE][NAME];
  char id[SIZE][ID];
  char phone_number[SIZE][PHONE_NUMBER];
  char address[SIZE][ADDR];
  char date[SIZE][DATE];
  char amount_of_money[SIZE][MONEY];

  for (size_t i = 0; i < SIZE; i++) {
    printf("%s", "輸入車牌：");
    scanf(" %[^\n]", license_plate[i]);

    printf("%s", "輸入引擎編號：");
    scanf(" %[^\n]", engine_number[i]);

    printf("%s", "輸入姓名：");
    scanf(" %[^\n]", name[i]);

    printf("%s", "輸入身份證字號：");
    scanf(" %[^\n]", id[i]);

    printf("%s", "輸入電話：");
    scanf(" %[^\n]", phone_number[i]);

    printf("%s", "輸入地址：");
    scanf(" %[^\n]", address[i]);

    printf("%s", "輸入時間：");
    scanf(" %[^\n]", date[i]);

    printf("%s", "輸入租金：");
    scanf(" %[^\n]", amount_of_money[i]);

    (data + i)->license_plate = license_plate[i];
    (data + i)->engine_number = engine_number[i];
    (data + i)->name = name[i];
    (data + i)->id = id[i];
    (data + i)->phone_number = phone_number[i];
    (data + i)->address = address[i];
    (data + i)->date = date[i];
    (data + i)->amount_of_money = amount_of_money[i];

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

void keyin(vehicle_management_t *data, unsigned int *account, char *name, double *balance) {
  puts("Enter the account, name, and balance.");
  puts("Enter EOF to end input.(Linux is Ctrl + D, Windows is Ctrl + Z)");
  while (!feof(stdin)) {
    printf("%s", "> ");
    scanf("%d%29s%lf[^\n]", account, name, balance);
  }
}

void write_data(vehicle_management_t *data_p, size_t count) {
  puts("File is write...");
  for (size_t i = 0; i < count; i++) {
    printf("%p row: %ld\n", &*(data_p + i), i);
    write_row_data(*(data_p + i));
  }
}

void write_row_data(vehicle_management_t data) {
  FILE *stderr_p;

  if ((stderr_p = fopen("vehicle_management_data.csv", "a")) == NULL) {
    puts("File could not be opened");
  } else {
    fprintf(stderr_p, "%s, %s, %s, %s, %s, %s, %s, %s\n",
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
