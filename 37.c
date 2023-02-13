#include <stdio.h>
int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    // int f = 0, s = 1, fibo;
    // printf("%d %d ", f, s);
    // for (int i = 2; i < 5; i++)
    // {
    //     fibo = f + s;
    //     f = s;
    //     s = fibo;
    //     printf("%d ", fibo);
    // }
    int n;
    scanf("%d", &n);
    fibo(n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }
}