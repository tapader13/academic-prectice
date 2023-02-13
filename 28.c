#include <stdio.h>
int pr(char ch[], char key)
{
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == key)
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    char ch[20];
    gets(ch);
    int res = pr(ch, 'k');
    if (res == 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}