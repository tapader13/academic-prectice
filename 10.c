#include <stdio.h>
int main()
{
    for (int i = 10; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("%d\n");
    for (float i = 11.0; i >= 2.00; i--)
    {
        printf("%f ", i);
    }
    printf("%d\n");
    for (char i = 'Z'; i >= 'A'; i--)
    {
        printf("%c ", i);
    }
}