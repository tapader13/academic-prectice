#include <stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            printf("%d ", j);
            // printf("%c ", j + 64);
        }
        printf("\n");
    }
    for (int i = 3 - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {

            printf("%d ", j);
            // printf("%c ", j + 64);
        }
        printf("\n");
    }
}