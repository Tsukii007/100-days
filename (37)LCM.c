#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int x = a, y = b;  // store og values
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    int hcf = a;
    int lcm = (x * y) / hcf;
    printf("LCM: %d\n", lcm);
    return 0;
}
