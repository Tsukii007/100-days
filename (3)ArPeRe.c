/* taking length and breadth and calculating are and perimeter */
#include <stdio.h>
int main() {
    float len, bre;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &len, &bre):
    float area,perimeter;
    area = len * bre;
    perimeter = 2 * (length + breadth);
    printf("Area = %.2f,Perimeter = %.2f\n", area, perimeter);  //.2 is roundig off the value to two digits after decimal
    return 0;
}
