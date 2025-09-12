#include <stdio.h>
void pattern1(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int N;
    printf("Enter size of pattern: ");
    scanf("%d", &N);
    pattern1(N);
    return 0;
}
