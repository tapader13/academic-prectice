#include <stdio.h>
int main()
{
    float n, sum = 0;
    scanf("%f", &n);
    for (float i = 1; i <= n; i++)
    {
        sum = sum + (1 / i);
        if (i == 1)
        {
            printf("1 +");
        }
        else if (i == n)
        {
            printf("1/%.0f", i);
        }
        else
        {
            printf("1/%.0f +", i);
        }
    }
    printf(" = %.2f", sum);
}