#include <stdio.h>
int main()
{
    int arr1[] = {1, 2, 3}, arr2[20];
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        arr2[i] = arr1[i];
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr2[i]);
    }
}