#include <stdio.h>
int print(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 2, 4, 5, 8};
    int size = sizeof(arr);
    int key = 5;
    int res = print(arr, size, key);
    if (res == -1)
    {
        printf("not");
    }
    else
    {
        printf("%d", res);
    }
}