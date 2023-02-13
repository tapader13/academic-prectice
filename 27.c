#include <stdio.h>
#include <string.h>
void pri(char ch[])
{
    int i = 0, c = 0;
    int ln = strlen(ch);
    for (i = 0; ch[i] != 0; i++)
    {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
        {
            c++;
        }
    }

    printf("consonent = %d", ln - c);
    printf("vowel = %d", c);
}
int main()
{
    char ch[20];
    gets(ch);
    // scanf("%s", &ch);
    // printf("%s", ch);
    pri(ch);
}