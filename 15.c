#include <stdio.h>
int main()
{
    int n, c = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
}