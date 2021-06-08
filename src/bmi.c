#include <stdio.h>

int main(void) {
  float weight;
  float height;
  float bmi;

  printf("Enter weight in kilogram:");
  scanf("%f", &weight);
  printf("Enter height in Meter:");
  scanf("%f", &height);

  bmi = weight / (height * height);

  printf("BMI is %f\n", bmi);

  puts("");
  puts("BMI VALUES");
  puts("Underweight: less than 18.5");
  puts("Normal:      between 18.5 and 24.9");
  puts("Overweight:  between 25 and 29.9");
  puts("Obese:       30 or greater");

}
