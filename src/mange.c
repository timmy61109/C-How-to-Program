#include <stdio.h>
#define SIZE 3
#define ADDR 200
#define DATE 20
#define LICENSE_PLATE 19
#define ID 10
#define NAME 20

typedef struct {
  char *license_plate = (char*) "";
  long long int *engine_number = (long long int*) 0;
  char *name = (char*) "";
  char *id = (char*) "";
  long long int *phone_number = (long long int*) 0;
  char *address = (char*) "";
  char *date = (char*) "";
  long long int *amount_of_money = (long long int*) 0;
} vehicle_management;

int main(int argc, char const *argv[]) {
  char search_name[NAME];
  vehicle_management Data[SIZE];

  vehicle_management Example[SIZE] = {
    {
      (char*) "2432-6962-0262-2139",
      (long long int*) 21086155,
      (char*) "甯庭佳",
      (char*) "J257823365",
      (long long int*) 886976041644,
      (char*) "457 新北市雙溪區大灣七街二段335巷144弄740號13樓",
      (char*) "February 18, 1988",
      (long long int*) 73200
    }, {
      (char*) "5295-7162-0442-0867",
      (long long int*) 31312262,
      (char*) "司婉安",
      (char*) "Q214131854",
      (long long int*) 886923402560,
      (char*) "374-80 基隆市中正區通明街六段553巷966弄277號44樓",
      (char*) "July 4, 1936",
      (long long int*) 65800
    }, {
      (char*) "2432-6962-0262-2139",
      (long long int*) 69848125,
      (char*) "姜雅涵",
      (char*) "E129441704",
      (long long int*) 886959404352,
      (char*) "670 高雄市左營區吉利四街350號",
      (char*) "February 2, 1999",
      (long long int*) 114900
    }
  };

  printf("%s\n\n", "The is Example.");
  for (size_t i = 0; i < SIZE; i++) {
    printf("%s%s\n", "車牌：", Example[i].license_plate);
    printf("%s%lld\n", "引擎編號：", (long long int) Example[i].engine_number);
    printf("%s%s\n", "姓名：", Example[i].name);
    printf("%s%s\n", "身份證字號：", Example[i].id);
    printf("%s%lld\n", "電話：", (long long int) Example[i].phone_number);
    printf("%s%s\n", "地址：", Example[i].address);
    printf("%s%s\n", "時間：", Example[i].date);
    printf("%s%lld\n\n", "租金：", (long long int) Example[i].amount_of_money);

  }

  for (size_t i = 0; i < SIZE; i++) {
    char license_plate[LICENSE_PLATE];
    long long int engine_number;
    char name[NAME];
    char id[ID];
    long long int phone_number;
    char address[ADDR];
    char date[DATE];
    long long int amount_of_money;

    printf("%s", "輸入車牌：");
    fgets(license_plate, LICENSE_PLATE, stdin);

    printf("%s", "輸入引擎編號：");
    scanf(" %lld", &engine_number);

    getchar();
    printf("%s", "輸入姓名：");
    fgets(name, NAME, stdin);

    printf("%s", "輸入身份證字號：");
    fgets(id, ID, stdin);

    printf("%s", "輸入電話：");
    scanf(" %lld", &phone_number);

    getchar();
    printf("%s", "輸入地址：");
    fgets(address, ADDR, stdin);

    printf("%s", "輸入時間：");
    fgets(date, DATE, stdin);

    printf("%s", "輸入租金：");
    scanf(" %lld", &amount_of_money);

    getchar();
    
    Data[i].license_plate = (char*) license_plate;
    Data[i].engine_number = (long long int*) engine_number;
    Data[i].name = (char*) name;
    Data[i].id = (char*) id;
    Data[i].phone_number = (long long int*) phone_number;
    Data[i].address = (char*) address;
    Data[i].date = (char*) date;
    Data[i].amount_of_money = (long long int*) amount_of_money;
    puts("");

  }

  for (size_t i = 0; i < SIZE; i++) {
    printf("%s%s\n", "車牌：", Data[i].license_plate);
    printf("%s%lld\n", "引擎編號：", (long long int) Data[i].engine_number);
    printf("%s%s\n", "姓名：", Data[i].name);
    printf("%s%s\n", "身份證字號：", Data[i].id);
    printf("%s%lld\n", "電話：", (long long int) Data[i].phone_number);
    printf("%s%s\n", "地址：", Data[i].address);
    printf("%s%s\n", "時間：", Data[i].date);
    printf("%s%lld\n\n", "租金：", (long long int) Data[i].amount_of_money);

  }

  printf("%s", "輸入搜尋姓名：");
  fgets(search_name, NAME, stdin);
  puts("");

  for (size_t i = 0; i < SIZE; i++) {
    if (Data[i].name == search_name) {
      printf("%s%s\n", "車牌：", Data[i].license_plate);
      printf("%s%lld\n", "引擎編號：", (long long int) Data[i].engine_number);
      printf("%s%s\n", "姓名：", Data[i].name);
      printf("%s%s\n", "身份證字號：", Data[i].id);
      printf("%s%lld\n", "電話：", (long long int) Data[i].phone_number);
      printf("%s%s\n", "地址：", Data[i].address);
      printf("%s%s\n", "時間：", Data[i].date);
      printf("%s%lld\n\n", "租金：", (long long int) Data[i].amount_of_money);

      break;
    }
  }

}
