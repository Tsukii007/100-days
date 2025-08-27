/* Program to input two numbers and displaying their sum, difference, product, and quotient */
#include <stdio.h>

int main() {
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  int sum = num1 + num2;
  int diff = num1 - num2;
  int pro = num1 * num2;
  int quo;
  if (num2 != 0)
    quo = num1/num2;
  else 
    quo = 0;
  printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum , diff, pro ,quo);
  return 0;
}
