#include <stdio.h>
int main()
{
    int a, b;
    //    valid way, a = b = 0;
    printf("Enter two value : ");
    scanf("%d%d", &a, &b);

    printf("%d", 2 * (a + b));
}