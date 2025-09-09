#include <stdio.h>
int main() {
    int day;
    scanf("%d", &day);
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}

/* #include <stdio.h>
int main() {
    int day;
    scanf("%d", &day);
    if (day == 1)
        printf("Monday\n");
    else if (day == 2)
        printf("Tuesday\n");
    else if (day == 3)
        printf("Wednesday\n");
    else if (day == 4)
        printf("Thursday\n");
    else if (day == 5)
        printf("Friday\n");
    else if (day == 6)
        printf("Saturday\n");
    else if (day == 7)
        printf("Sunday\n");
    else
        printf("Invalid input\n");
    return 0;
}
*/
