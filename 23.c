#include <stdio.h>
void parr(int arr[][10], int row, int col, int num)
{
    for (int i = 0; i < col; i++)
    {
        arr[row][i] = num * (i + 1);
    }
}
int main()
{
    int arr[2][10];

    parr(arr, 0, 10, 2);
    parr(arr, 1, 10, 3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[1][i]);
    }
    printf("\n");
}