#include <stdio.h>
int main()
{
    int n;

    do
    {
        scanf("%d", &n);
        printf("%d\n", n);
        if (n % 7 == 0)
        {
            break;
        }

    } while (1);
    printf("end");
}

// {
//     int n;

//     do
//     {
//         scanf("%d", &n);
//         printf("%d\n", n);
//         if (n % 2 != 0)
//         {
//             break;
//         }

//     } while (1);
//     printf("end");
// }

// for (int i = 1; i >= 1; i--)
// {
//     printf("%d ", i);
// }

// for (int i = 1; i <= 10; i++)
// {
//     printf("%d ", n * i);
// }

// for (int i = 10; i >= 1; i--)
// {
//     if (i == 7)
//     {
//         break;
//     }
//     printf("%d ", i);
// }
