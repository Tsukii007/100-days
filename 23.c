#include <stdio.h>
int main() {
    int days;
    printf("Enter late days: ");
    scanf("%d", &days);
    if (days <= 30) {
        int fine = days * 2;
        printf("Fine ₹%d\n", fine);
    } 
    else {
        printf("Membership Cancelled\n");
    }
    return 0;
}
