#include <stdio.h>
int main() {
    int totalSec;
    int hours, min, sec;
    scanf("%d", &totalSec);
    hours = totalSec / 3600;
    min = (totalSec % 3600) / 60;
    sec = totalSec % 60;
    printf("%d:%d:%d\n", hours, min, sec);
    return 0;
}
