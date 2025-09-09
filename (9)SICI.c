#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time;
    float sI, cI;
    scanf("%f %f %f", &principal, &rate, &time);
    sI = (principal * rate * time) / 100.0;
    cI = principal * pow((1 + rate / 100.0), time) - principal;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", sI, cI);
    return 0;
}
