#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int a = 1;
    int b = 2;
    swap(&a, &b);
    printf("a=%d,b=%d", a, b);
}
