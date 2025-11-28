#include <stdio.h>
int main() {
    int i, j, space, star;
    int n = 5;
    for (i = 0; i < n; i++) {
        for (space = 0; space < i * 2; space++) {
            printf(" ");
        }
        for (star = 0; star < n - i; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
