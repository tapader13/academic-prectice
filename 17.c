#include <stdio.h>
void squre(int *a)
{
    *a = *a * *a;
}
int main()
{
    int a = 2;

    squre(&a);
    printf("a=%d", a);
}
