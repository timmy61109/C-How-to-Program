#include <stdio.h>
#include <stdlib.h>

typedef struct {
  const char* license_plate = "";
  long int engine_number = 0;
  const char* name = "";
  const char* id = "";
  long long int phone_number = 0;
  const char* address = "";
  const char* date = "";
  double amount_of_money = 0;
} vehicle_management;

void print_data(vehicle_management *data);
void print_row_data(vehicle_management data);
void vehicle_search(vehicle_management *data);

int main(int argc, char const *argv[]) {
  vehicle_management Data[3];

  vehicle_management Example[3] = {
    {
      "2432-6962-0262-2139",
      21086155,
      "甯庭佳",
      "J257823365",
      886976041644,
      "457 新北市雙溪區大灣七街二段335巷144弄740號13樓",
      "February 18, 1988",
      73200.0
    }, {
      "5295-7162-0442-0867",
      31312262,
      "司婉安",
      "Q214131854",
      886923402560,
      "374-80 基隆市中正區通明街六段553巷966弄277號44樓",
      "July 4, 1936",
      65800.0
    }, {
      "2432-6962-0262-2139",
      69848125,
      "姜雅涵",
      "E129441704",
      886959404352,
      "670 高雄市左營區吉利四街350號",
      "February 2, 1999",
      114900.0
    }
  };

  printf("%s\n\n", "The is Example.");
  print_data(Example);

  for (size_t i = 0; i < 3; i++) {
    printf("%s", "輸入車牌：");
    scanf("%s", (char*) Data[i].license_plate);

    printf("%s", "輸入引擎編號：");
    scanf("%ld", (long int*) Data[i].engine_number);

    printf("%s", "輸入姓名：");
    scanf("%s", (char*) Data[i].name);

    printf("%s", "輸入身份證字號：");
    scanf("%s", (char*) Data[i].id);

    printf("%s", "輸入電話：");
    scanf("%lld", (long long int*) Data[i].phone_number);

    printf("%s", "輸入地址：");
    scanf("%s", (char*) Data[i].address);

    printf("%s", "輸入時間：");
    scanf("%s", (char*) Data[i].date);

    printf("%s", "輸入租金：");
    scanf("%lf", (double) Data[i].amount_of_money);

  }

  vehicle_search(Example);

  system("pause");
  exit(1);

}

void print_data(vehicle_management *data) {
  for (size_t i = 0; i < sizeof(data); i++) {
    print_row_data(data[i]);
  }
}

void print_row_data(vehicle_management data) {
  printf("%s%s\n", "車牌：", data.license_plate);
  printf("%s%ld\n", "引擎編號：", data.engine_number);
  printf("%s%s\n", "姓名：",data.name);
  printf("%s%s\n", "身份證字號：", data.id);
  printf("%s%lld\n", "電話：", data.phone_number);
  printf("%s%s\n", "地址：", data.address);
  printf("%s%s\n", "時間：", data.date);
  printf("%s%f\n\n", "租金：", data.amount_of_money);
}

void vehicle_search(vehicle_management *data) {
  char search_name;
  scanf("%s", &search_name);

  for (size_t i = 0; i < sizeof(data); i++) {
    if (data[i].name == &search_name) {
      print_row_data(data[i]);

    }
  }
}

void name(vehicle_management *data) {
  FILE *file;
}
