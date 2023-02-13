#include <stdio.h>
int printFibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return printFibo(n - 1) + printFibo(n - 2);
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", printFibo(i));
    }
}