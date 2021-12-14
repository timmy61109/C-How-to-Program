#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ch13_self0.h"
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


BankUserClient::BankUserClient(info_t *info) {
}

BankUserClient::BankUserClient(const BankUserClient& str) {
  // Copy constructor
 }

void BankUserClient::sign_up() {
  /* 註冊 */

}

void BankUserClient::sign_in() {
  /* 登入 */
}

void BankUserClient::query() {
  /* 查詢 */
}

void BankUserClient::deposit() {
  /* 提款 */
}

void BankUserClient::withdraw() {
  /* 存款 */
}

void exit() {
  /* 離開 */
}

unsigned int BankUserClient::init_menu() {
  // 初始化功能選擇輸入
  printf("%s", "\n > ");
  unsigned int init_menu_choice;
  scanf("%u", &init_menu_choice);
  return init_menu_choice;
}

unsigned int BankUserClient::database_menu() {
  // 資料庫功能選擇輸入
  printf("%s", "\n (database) > ");
  unsigned int database_menu_choice;
  scanf("%u", &database_menu_choice);
  return database_menu_choice;
}

void BankUserClient::database() {
  // 資料庫主程式
  unsigned int choice = 119;

  while (choice != 4) {
    switch (choice) {
      case 1:
        creat_database();
        break;

      case 2: {
        use_database();
        break;
      }

      case 3: {
        close_database();
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

void BankUserClient::creat_database() {
  // 建立資料庫
  FILE *file_p;
  char database_name[50];
  user_data_t database = {0, "null", "null", "null", "null", 0};

  printf("%s", "Please keyin database name: ");
  scanf("%s", database_name);

  if ((file_p = fopen(database_name, "wb")) == NULL) {
    puts("File could not be opened.");

  } else {

    for (size_t i = 0; i < DATABASE; i++) {
      fwrite(&database, sizeof(user_data_t), 1, file_p);
    }
    printf("%s%s%s", "database ", database_name, " is success.\n");
  }
  fclose(file_p);
}

void BankUserClient::use_database() {
  // 選擇使用的資料庫
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
      fread(&data_p[count], sizeof(user_data_t), 1, file_p);
      if (count < DATABASE) {
        count++;
      }
    }
    printf("%u\n", count);
  }
  fclose(file_p);
  printf("%s%s%s\n", "use ", database_name, " database");
}

void BankUserClient::close_database() {
  // 關閉資料庫並把資料清空
  FILE *file_p;
  char database_name_p[50];
  printf("%s", "Please keyin svae data the database name: ");
  scanf("%s", database_name_p);

  if ((file_p = fopen(database_name_p, "rb+")) == NULL) {
    puts("File could not be opened.");

  } else {
    printf("%s\n", "svae file...");

    for (size_t i = 0; i < DATABASE; i++) {
      fseek(file_p, i * sizeof(user_data_t), SEEK_SET);
      fwrite(&data_p[i], sizeof(user_data_t), 1, file_p);
      user_data_t null = {0, "null", "null", "null", "null", 0};
      data_p[i] = null;
    }
  }
  fclose(file_p);
  printf("%s%s%s", "database ", database_name_p, " is success.\n");
}

unsigned int management_meun() {
  // 管理功能選擇輸入
  printf("%s", "\n (management) > ");
  unsigned int management_menu_choice;
  scanf("%u", &management_menu_choice);
  return management_menu_choice;
}

void BankUserClient::export_csv(user_data_t *data_p) {
  // 將記憶體的資料輸出csv格式
  unsigned int count = DATABASE;
  char file_name[50];
  printf("%s", "Please keyin file name: ");
  scanf("%s", file_name);
  write_data(file_name, data_p, &count);

}

void BankUserClient::insert(user_data_t *data_p) {
  // 插入資料，輸入編號選擇插入位置
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

void BankUserClient::selete(user_data_t *data_p) {
  // 搜尋資料，以姓名篩選指定的資料
  unsigned int count = DATABASE;
  printf("%s%u%s", "Enter name search (1 - ", count, ")\n");

  printf("%s", "\n (selete) >>> ");
  search(data_p);
}

void BankUserClient::drop(user_data_t *data_p) {
  // 刪除資料，輸入該數字的編號
  unsigned int account = 0;
  user_data_t temp = {0, "null", "null", "null", "null", 0};

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

void BankUserClient::update(user_data_t *data_p) {
  // 更新資料，輸入數字選擇更新位置
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

void BankUserClient::example() {
  // 產生示範資料，該資料會自動儲存在記憶體
  user_data_t create[SIZE] = {
    {
      1,
      "Lory L. Hash",
      "J262986562",
      "5132-8093-6999-5158",
      "H;rpvV^!uRg9",
      73200
    }, {
      2,
      "賀曉彤",
      "Q214131854",
      "5255-7185-6812-4208",
      "gf_g9b|$~Q9\"",
      812000
    }, {
      3,
      "Donna J. Johnson",
      "E129441704",
      "4916-1212-9727-7104",
      "!Gh:zAQcr)\\@",
      114900
    }
  };
  for (size_t i = 0; i < SIZE; i++) {
    info.target_data[i] = create[i];
  }
}

unsigned int merge_menu() {
  // 合併功能選擇輸入
  printf("%s", "\n (merge) > ");
  unsigned int merge_menu_choice;
  scanf("%u", &merge_menu_choice);
  return merge_menu_choice;
}

void BankUserClient::merge(info_t *info_p) {
  // 合併主程式
  unsigned int choice = 119;

  while (choice != 3) {
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
    choice = merge_menu();
  }

}

void BankUserClient::file_merge_data() {
  // 檔案合併到記憶體
  // 操作時會重新讀取選擇資料庫並覆蓋原先記憶體資料
  use_database(info.target_data);

  printf("%s", "Please keyin sources file name: ");
  scanf("%s", info.file_name);
  read_data(info);

  print_part_of_data(info);
  source_merge_to_target(info.source_data, info.target_data, &info.count);
  print_part_of_data(info);

}

void BankUserClient::data_merge_file() {
  // 記憶體合併到檔案
  // 操作時會重新讀取選擇資料庫並覆蓋原先記憶體資料
  printf("%s", "Please keyin target file name: ");
  scanf("%s", info.file_name);
  read_data(info);

  for (size_t i = 0; i < info.count; i++) {
    info.target_data[i] = info.source_data[i];
  }

  use_database(info.source_data);

  print_part_of_data(info);
  source_merge_to_target(info.source_data, info.target_data, &info.count);
  print_part_of_data(info);

  write_data(info.file_name, info.target_data, &info.count);
}

void BankUserClient::source_merge_to_target(user_data_t *source_data_p,
    user_data_t *target_data_p, unsigned int *count_p) {
  // 將兩種不同陣列合併，分別是來源合併目標，通過將來源合併到目標
  unsigned int _compare;
  for (size_t i = 0; i < *count_p; i++) {
    _compare = 1;
    for (size_t j = 0; j < *count_p; j++) {
      _compare &= compare(target_data_p[j], source_data_p[i]);
    }
    if ((target_data_p[i].number == 0) && _compare) {
      target_data_p[i] = source_data_p[i];

    } else if ((target_data_p[i].number != 0) && _compare) {
      for (size_t k = 1; k < (*count_p - i); k++) {
        if (target_data_p[k + i].number == 0) {
          target_data_p[k + i] = source_data_p[i];
        }
      }
    }
  }
  printf("%s\n", "data merge file is success");

}

void BankUserClient::keyin(info_t *info_p) {
  // 連續資料輸入

  for (size_t i = 0; i < info_p->count; i++) {
    keyin_row((info_p->target_data + i));

  }
}

void BankUserClient::keyin_row(user_data_t *data_row_p) {
  // 單筆資料輸入
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

void BankUserClient::search(user_data_t *data_p) {
  // 篩選指定資料，此為使用姓名欄位做篩選
  // 篩選後會清除其他非篩選資料，如果沒有找到記憶體的資料會被空值清空
  user_data_t null = {0, "null", "null", "null", "null", 0};
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

void BankUserClient::print_data(user_data_t *data_p, unsigned int *count_p) {
  // 顯示記憶體中陣列資料
  for (size_t i = 0; i < *count_p; i++) {
    printf("%p\n", &*(data_p + i));
    print_row_data(*(data_p + i));
  }
}

void BankUserClient::print_row_data(user_data_t data) {
  // 顯示單筆資料
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

void BankUserClient::write_data(char *file_name_p, user_data_t *data_p, unsigned int *count_p) {
  // 建立資料夾並寫入資料
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

void BankUserClient::write_row_data(char *file_name_p, user_data_t data) {
  // 透過追加方式寫入資料

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

void BankUserClient::read_data() {
  // 讀取資料
  FILE *file_p;
  unsigned int count = 0;
  char line[7000];
  char *cut;

  if ((file_p = fopen(info.file_name, "r")) == NULL) {
    puts("File could not be opened");

  } else {
    printf("%s\n", "compute file size...");

    while (fgets(line, DATABASE, file_p) != NULL) {
      cut = strtok(line, ",");
      info.source_data[count].number = atoi(cut);

      cut = strtok(NULL, "\",");
      strcpy(info.source_data[count].license_plate, cut);

      cut = strtok(NULL, ",\"");
      info.source_data[count].engine_number = atoi(cut);

      cut = strtok(NULL, "\",\"");
      strcpy(info.source_data[count].name, cut);

      cut = strtok(NULL, "\",\"");
      strcpy(info.source_data[count].id, cut);

      cut = strtok(NULL, "\",\"");
      strcpy(info.source_data[count].phone_number, cut);

      cut = strtok(NULL, "\",\"");
      strcpy(info.source_data[count].address, cut);

      cut = strtok(NULL, "\",");
      strcpy(info.source_data[count].date, cut);

      cut = strtok(NULL, ",\"");
      info.source_data[count].amount_of_money = atoi(cut);

      if (info.source_data[count].number != 0) {
        print_row_data(info.source_data[count]);
      }

      if (count < DATABASE) {
        count++;
      }
    }
    info.count = count;
  }
}

int BankUserClient::compare(user_data_t source_data_p, user_data_t target_data_p) {
  /*比對數字後回傳數字結果

  一樣 return 0
  不一樣 return 1
  */
  int name = strcmp(
    source_data_p.name,
    target_data_p.name
  );
  int id = strcmp(
    source_data_p.id,
    target_data_p.id
  );
  int account = strcmp(
    source_data_p.account,
    target_data_p.account
  );
  int password = strcmp(
    source_data_p.password,
    target_data_p.password
  );
  int balance = source_data_p.balance == target_data_p.balance;
  return name || id || account || password || !balance;
}

void BankUserClient::print_part_of_data() {
  // 顯示記憶體有數值的資料，不會將空值也顯示出來
  // 會區分結構中兩個不同的資料，包括來源資料與目標資料
  printf("\n%s\n\n", "顯示來源資料");
  for (size_t i = 0; i < info.count; i++) {
    if (info.source_data[i].number != 0) {
      print_row_data(info.source_data[i]);
    }
  }
  printf("\n%s\n\n", "顯示目標資料");
  for (size_t i = 0; i < info.count; i++) {
    if (info.target_data[i].number != 0) {
      print_row_data(info.target_data[i]);
    }
  }
}
