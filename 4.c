/* calculating area and circumference while taking radius as input*/
#include <stdio.h>
int main() {
  float radius, area, circum;
  float pi = 3.1416;
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);
  area = pi * radius * radius;
  circum = 2 * pi * radius;
  printf("Area = %.2f,Circumference = %.2f\n", area, circum);
  return 0;
}
