#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
  if (n<=0){
      printf("Please enetr a positive integer");
      return 0;
    }
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum = %d\n",sum);
    return 0;
}
