#include <stdio.h>
int main()
{
    int fac = 1;
    for (int i = 1; i <= 6; i++)
    {
        fac = fac * i;
    }
    printf("%d", fac);
}