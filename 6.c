#include <stdio.h>
int main() {
    int num1, num2, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swap: %d %d\n", num1, num2);

    return 0;
}
