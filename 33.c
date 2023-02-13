#include <stdio.h>
int main()
{
    int a, b, rem, gcd, lcm, n1, n2;
    scanf("%d%d", &a, &b);
    n1 = a;
    n2 = b;

    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    lcm = (a * b) / gcd;
    printf("gcd = %d\n", gcd);
    printf("lcm = %d\n", lcm);
}