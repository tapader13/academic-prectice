#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[40] = "mim";
    int f, s;

    int len = strlen(ch1);

    for (int i = 0; i < len / 2; i++)
    {
        f = ch1[i];
        s = ch1[len - i - 1];
    }
    if (f == s)
    {
        printf("pali");
    }
    else
    {
        printf("not pali");
    }
}