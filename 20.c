#include <stdio.h>
void reverse(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int f = arr[i];
        int s = arr[n - i - 1];
        arr[i] = s;
        arr[n - i - 1] = f;
    }
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    reverse(arr, 5);
    print(arr, 5);
}