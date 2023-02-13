#include <stdio.h>
int main()
{
    char a;
    printf("Enter value : ");
    scanf("%c", &a);
    if (a >= '0' && a <= '9')
    {
        printf("digit");
    }
    else
    {
        printf("not digit");
    }
}