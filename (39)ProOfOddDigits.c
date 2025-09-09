#include <stdio.h>
int main() {
    int n, digit;
    int product = 1;
    int hasOdd = 0;
    scanf("%d", &n);
    while (n > 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }
    if (hasOdd)
        printf("%d", product);
    else
        printf("1");   // if no odd digits, output 1 as assumed
    return 0;
}
