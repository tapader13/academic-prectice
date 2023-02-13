#include <stdio.h>
void swap(int *a, int *b)
{
    if (*a > *b)
    {
        printf("max=%d", *a);
    }
    else
    {
        printf("max=%d", *b);
    }
}
int main()
{
    int a = 1;
    int b = 2;
    swap(&a, &b);
}
