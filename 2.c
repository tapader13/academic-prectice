#include <stdio.h>
int main()
{
    float a;
    printf("Enter a value : ");
    scanf("%f", &a);
    float r = 3.1416 * a * a;
    printf("%.4f", r);
}