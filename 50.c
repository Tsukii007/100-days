#include <stdio.h>

int main() {
    int i, j, space, star;
    int n = 5;  // Number of rows

    // Loop for rows
    for (i = 0; i < n; i++) {
        // Print spaces
        for (space = 0; space < i * 2; space++) {
            printf(" ");
        }
        // Print stars
        for (star = 0; star < n - i; star++) {
            printf("*");
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
