#include <stdio.h>
#define SIZE 3
#define LICENSE_PLATE 22
#define ENGINE 12
#define NAME 22
#define ID 12
#define PHONE_NUMBER 16
#define ADDR 202
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
} vehicle_management;

void print_data(vehicle_management *data);
void print_row_data(vehicle_management data);
void vehicle_search(vehicle_management *data);
void example_data(vehicle_management *data);
void input_data(vehicle_management *data);

int main() {
  vehicle_management in_data[SIZE];
  vehicle_management example[SIZE];

  printf("Example陣列第一元素指標:\n%p\n\n", example);
  example_data(example);
  printf("%s\n\n", "The is Example.");
  print_data(example);

  printf("Input資料陣列第一元素指標:\n%p\n\n", in_data);
  input_data(in_data);
  printf("%p\n", in_data);

  printf("%s\n\n", "The is key in data.");
  print_data(in_data);
  vehicle_search(in_data);

}

void print_data(vehicle_management *data) {
  for (size_t i = 0; i < SIZE; i++) {
    printf("%p\n", &*(data + i));
    print_row_data(*(data + i));
  }
}

void print_row_data(vehicle_management data) {
  printf("%s%s\n", "車牌：", data.license_plate);
  printf("%s%s\n", "引擎編號：", data.engine_number);
  printf("%s%s\n", "姓名：", data.name);
  printf("%s%s\n", "身份證字號：", data.id);
  printf("%s%s\n", "電話：", data.phone_number);
  printf("%s%s\n", "地址：", data.address);
  printf("%s%s\n", "時間：", data.date);
  printf("%s%s\n\n", "租金：", data.amount_of_money);

}

void example_data(vehicle_management *data) {
  vehicle_management create[SIZE] = {
    {
      (char*) "2432-6962-0262-2139",
      (char*) "21086155",
      (char*) "甯庭佳",
      (char*) "J257823365",
      (char*) "+886 976041644",
      (char*) "457 新北市雙溪區大灣七街二段335巷144弄740號13樓",
      (char*) "February 18, 1988",
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
    printf("%p\n", &data[i]);
  }

}

void input_data(vehicle_management *data) {
  vehicle_management create[SIZE];
  for (size_t i = 0; i < SIZE; i++) {
    char license_plate[LICENSE_PLATE];
    char engine_number[ENGINE];
    char name[NAME];
    char id[ID];
    char phone_number[PHONE_NUMBER];
    char address[ADDR];
    char date[DATE];
    char amount_of_money[MONEY];

    printf("%p\n", &create[i]);
    printf("%s", "輸入車牌：");
    scanf(" %[^\n]", license_plate);

    printf("%s", "輸入引擎編號：");
    scanf(" %[^\n]", engine_number);
    // fgets(engine_number, ENGINE, stdin);

    printf("%s", "輸入姓名：");
    scanf(" %[^\n]", name);
    // fgets(name, NAME, stdin);

    printf("%s", "輸入身份證字號：");
    scanf(" %[^\n]", id);

    printf("%s", "輸入電話：");
    scanf(" %[^\n]", phone_number);
    // fgets(phone_number, PHONE_NUMBER, stdin);

    printf("%s", "輸入地址：");
    scanf(" %[^\n]", address);
    // fgets(address, ADDR, stdin);

    printf("%s", "輸入時間：");
    scanf(" %[^\n]", date);
    // fgets(date, DATE, stdin);

    printf("%s", "輸入租金：");
    scanf(" %[^\n]", amount_of_money);
    // fgets(amount_of_money, MONEY, stdin);

    puts("");

    vehicle_management tmp;
    tmp.license_plate = license_plate;
    tmp.engine_number = engine_number;
    tmp.name = name;
    tmp.id = id;
    tmp.phone_number = phone_number;
    tmp.address = address;
    tmp.date = date;
    tmp.amount_of_money = amount_of_money;
    print_row_data(create[i]);
    create[i] = tmp;
    print_row_data(tmp);
    print_row_data(create[i]);
  }
  print_data(&create[0]);
  for (size_t i = 0; i < SIZE; i++) {
    data[i] = create[i];
    printf("the data %p to %p\n", &create[i], &data[i]);
  }
}

void vehicle_search(vehicle_management *data) {
  char search_name[NAME];
  char *compare_name;
  printf("%s", "輸入搜尋姓名：");
  fgets(search_name, NAME, stdin);

  for (size_t i = 0; i < SIZE; i++) {
    compare_name = *&(data[i].name);
    printf("%lu", i);
    printf("%s%s\n", "姓名：", compare_name);
    printf("%s%s\n", "姓名：", data[i].name);
    if (compare_name == search_name) {
      print_row_data(*(data + i));
      break;
    }
  }
}
