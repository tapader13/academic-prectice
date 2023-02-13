#include <stdio.h>
int main()
{
    int n, sum = 0, avg;
    printf("Enter array number : ");
    scanf("%d", &n);
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("sum = %d\n", sum);
    printf("Avg = %d\n", sum / n);
}