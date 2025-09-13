#include <stdio.h>

int main() {
    int N = 5; // number of rows (fixed as per sample)
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
