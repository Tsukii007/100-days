#include <stdio.h>
int main() {
    int days;
    printf("Enter late days: ");
    scanf("%d", &days);
     if (days <= 0) {
        printf("No fine");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine: ₹%d", fine);
    }
    else if (days <= 10) {
        fine = 10 + (days - 5) * 4; // 10 is for first 5 days
        printf("Fine: ₹%d", fine);
    }
    else if (days <= 30) {
        fine = 30 + (days - 10) * 6; // 30 is for first 10 days
        printf("Fine: ₹%d", fine);
    }
    else {
        printf("Membership Cancelled\n");
    }
    return 0;
}
