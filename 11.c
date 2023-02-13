#include <stdio.h>
int main()
{
    int sum = 0, op = 0, r;
    for (int i = 10; i >= 1; i--)
    {
        printf("%d ", i);
    }
    for (int i = 1; i <= 5; i++)
    {
        sum += i;
    }
    printf("%d ", sum);
    while (sum != 0)
    {
        r = sum % 10;
        sum = sum / 10;
        op = op * 10 + r;
    }
    printf("%d ", op);
}