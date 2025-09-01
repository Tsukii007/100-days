/*First 100 units is 5 per unit
Next 100 units (101–200) is 7 per unit
Above 200 units is 10 per unit*/
#include <stdio.h>
int main() {
    int units;
    int bill = 0;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    } 
    else {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    printf("Bill: ₹%d\n", bill);
    return 0;
}
