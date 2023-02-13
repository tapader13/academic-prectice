#include <stdio.h>
void pri(char ch[], int len)
{
    int t, f, s;
    for (int i = 0; i < len / 2; i++)
    {
        f = ch[i];
        s = ch[len - i - 1];
        ch[i] = s;
        ch[len - i - 1] = f;
    }
}
int main()
{
    char ch[20];
    gets(ch);
    int len = strlen(ch);
    // printf("%s", ch);

    pri(ch, len);
    printf("%s", ch);
}