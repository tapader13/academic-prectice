#include <stdio.h>
#include <string.h>
void pri(char ch[])
{
    int t = 0, i = 0;
    while (ch[i] != '\0')
    {
        t++;
        i++;
    }
    printf("%d", t);
}
int main()
{
    char ch[20];
    gets(ch);

    pri(ch);
}