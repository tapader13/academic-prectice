#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter value : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("divisable");
    }
    else
    {
        printf("not divisable");
    }
}