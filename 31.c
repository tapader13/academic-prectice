#include <stdio.h>
#include <string.h>
void pr(char ch[])
{
    int i = 0, j = 0, len;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        ch[i] = ch[i + j];
        if (ch[i] == ' ')
        {
            j++;
            i--;
        }
    }

    puts(ch);
}
int main()
{
    char ch[29];
    gets(ch);
    pr(ch);
}