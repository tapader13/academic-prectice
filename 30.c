#include <stdio.h>
#include <string.h>
#include <ctype.h>
void pri(char ch[])
{
    int i = 0;

    for (i = 0; ch[i] != 0; i++)
    {

        ch[i] = ch[i] - 32;
    }

    puts(ch);
    // printf("vowel = %d", ch[i]);
}
int main()
{
    char ch[20];
    gets(ch);
    // scanf("%s", &ch);
    // printf("%s", ch);
    pri(ch);
}