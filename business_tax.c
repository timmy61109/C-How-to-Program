// business_tax.c
/*
營業稅

營業稅是向買方收取並付給政府的，零售商必須提交每個月營業稅報表，其中列出該月的營業額合所徵收的營
業稅額合徵收的營業稅額，並分別列出郡政府和州政府稅。請開發一個程式，輸入一個月的總收入，計算收入
的營業稅，並分別顯示出郡政府稅和政府稅。假設週的營業稅率是4%，郡的營業稅是5%。以下是輸入／輸出
的對話範例。

*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
  float total;
  char month = ' ';
  float sales;
  float county_sales_tax;
  float state_sales_tax;
  float total_sales_tax;

  while (total != -1) {
    total = 0;

    printf("Enter total amount collected (-1 to quit):");
    scanf("%f", &total);

    if (total != -1) {
      printf("Enter name of month: ");
      scanf("%c", &month);

      county_sales_tax = total * 0.04;
      state_sales_tax = total * 0.05;
      total_sales_tax = county_sales_tax + state_sales_tax;
      sales = total - total_sales_tax;

      printf("Total Collections: $%.0f\n", total);
      printf("Sales: $%.3f\n", sales);
      printf("County Sales Tax: $%.3f\n", county_sales_tax);
      printf("State Sales Tax: $%.3f\n", state_sales_tax);
      printf("Total Sales Tax: $%.3f\n\n", total_sales_tax);

    }

  }
}
