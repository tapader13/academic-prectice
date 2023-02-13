#include <stdio.h>
int main()
{
    int arr1[3][3], sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr1[%d][%d] =", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j > i)
            {
                sum += arr1[i][j];
            }
        }
    }
    printf("%d", sum);
}