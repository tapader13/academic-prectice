#include <stdio.h>
int main()
{
    for (int i = 3; i >= 1; i--)
    {
        for (int j = 1; j <= 3 - i; j++)
        {

            printf(" ");
            // printf("%c ", j + 64);
        }
        for (int j = 1; j <= i; j++)
        {

            printf("%d", j);
            // printf("%c ", j + 64);
        }

        printf("\n");
    }
}