#include <stdio.h>
int main()
{
    char ch[] = "minHaj";
    int c = 0, s = 0, i = 0;

    for (int i = 0; ch[i] != 0; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            c++;
        }
        else
        {
            s++;
        }
    }

    printf("%d\n", c);
    printf("%d\n", s);
}