#include <stdio.h>
int main() {
    int n, binary = 0, place = 1, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        rem = n % 2;
        binary = binary + rem * place;
        place *= 10;
        n = n / 2;
    }
    printf("%d\n", binary);
    return 0;
}
