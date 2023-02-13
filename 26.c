#include <stdio.h>
#include <string.h>
void pri(char ch[], int n, int m)
{
    int j = 0;
    char new[20];
    for (int i = n; i <= m; i++, j++)
    {
        new[j] = ch[i];
    }
    new[j] = '\0';
    puts(new);
}
int main()
{
    char ch[20];
    gets(ch);

    pri(ch, 3, 6);
}