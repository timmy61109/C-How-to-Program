#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef struct {
  const char* license_plate;
  long int engine_number;
  const char* name;
  const char* id;
  long long int phone_number;
  const char* address;
  const char* date;
  double amount_of_money;
} vehicle_management;

int main(int argc, char const *argv[]) {
  char search_name;
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
  for (size_t i = 0; i < sizeof(Example); i++) {
    printf("%s%s\n", "車牌：", Example[i].license_plate);
    printf("%s%ld\n", "引擎編號：", Example[i].engine_number);
    printf("%s%s\n", "姓名：",Example[i].name);
    printf("%s%s\n", "身份證字號：", Example[i].id);
    printf("%s%lld\n", "電話：", Example[i].phone_number);
    printf("%s%s\n", "地址：", Example[i].address);
    printf("%s%s\n", "時間：", Example[i].date);
    printf("%s%f\n\n", "租金：", Example[i].amount_of_money);

  }

  for (size_t i = 0; i < 3; i++) {
    printf("%s", "輸入車牌：");
    scanf("%s", Data[i].license_plate);

    printf("%s", "輸入引擎編號：");
    scanf(" %ld", Data[i].engine_number);

    printf("%s", "輸入姓名：");
    scanf(" %[^\n]", Data[i].name);

    printf("%s", "輸入身份證字號：");
    scanf(" %[^\n]", Data[i].id);

    printf("%s", "輸入電話：");
    scanf("%lld", Data[i].phone_number);

    printf("%s", "輸入地址：");
    scanf("%[^\n]", Data[i].address);

    printf("%s", "輸入時間：");
    scanf("%[^\n]", Data[i].date);

    printf("%s", "輸入租金：");
    scanf("%lf[^\n]", Data[i].amount_of_money);

  }

  scanf("%s", &search_name);

  for (size_t i = 0; i < sizeof(Data); i++) {
    if (Data[i].name == &search_name) {
      printf("%s%s\n", "車牌：", Data[i].license_plate);
      printf("%s%ld\n", "引擎編號：", Data[i].engine_number);
      printf("%s%s\n", "姓名",Data[i].name);
      printf("%s%s\n", "身份證字號", Data[i].id);
      printf("%s%lld\n", "電話", Data[i].phone_number);
      printf("%s%s\n", "地址", Data[i].address);
      printf("%s%s\n", "時間", Data[i].date);
      printf("%s%f\n", "租金", Data[i].amount_of_money);

    }
  }

}
