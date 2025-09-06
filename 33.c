#include <stdio.h>
#include <math.h>
int main() {
    int n, original, rem, digits = 0;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        sum += (int)pow(rem, digits);
        temp /= 10;
    }
    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
