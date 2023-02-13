#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter value : ");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && a < c)
    {
        printf("a is smallest number");
    }
    if (b < a && b < c)
    {
        printf("b is smallest number");
    }
    if (c < b && c < a)
    {
        printf("c is smallest number");
    }
}