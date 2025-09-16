#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5; // Number of rows

    // Loop for rows
    for (i = 5; i >= 1; i--) {
        // Print spaces before numbers
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        // Print numbers from i to 5
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
