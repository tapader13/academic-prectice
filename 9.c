#include <stdio.h>
int main()
{
    int n, digit, r = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        r += (digit) * (digit) * (digit);
    }
    printf("%d", r);
}