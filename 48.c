#include <stdio.h>

int main() {
    int i, j;

    // Loop for rows
    for (i = 1; i <= 5; i++) {
        // Loop for columns (printing numbers from 1 to i)
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
