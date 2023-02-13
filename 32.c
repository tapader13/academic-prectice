#include <stdio.h>
int main()
{
    int a = 10;
    int b = 5;
    a = a + b;
    b = a - b;
    a = a - b;
    double g = pow(2, 3);
    printf("power is =%.0lf\n", g);
    printf("a is =%d\n", a);
    printf("b is =%d\n", b);
}