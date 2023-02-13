#include <stdio.h>
int main()
{
    char ch1[30] = "minhaj ";
    char ch2[] = "tapader";
    int len = 0;
    for (int i = 0; ch1[i] != 0; i++)
    {
        len++;
    }
    for (int i = 0; ch2[i] != 0; i++)
    {
        ch1[len + i] = ch2[i];
    }
    printf("%s", ch1);
}