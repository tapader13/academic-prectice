#include <stdio.h>
int main()
{
    int base = 3, pow = 4, res = 1;
    for (int i = 1; i <= pow; i++)
    {
        res = res * base;
    }
    printf("%d", res);
}