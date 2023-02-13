#include <stdio.h>
int main()
{
    int n, max;
    printf("Enter array number : ");
    scanf("%d", &n);
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("max is %d", max);
}