#include <stdio.h>
int main()
{
    int n, temp, sum = 0, rem;
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {

        sum++;
        temp = temp / 10;
    }
    printf("%d", sum);
}