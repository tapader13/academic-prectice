#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[40] = "minhaj";
    int f, s;

    int len = strlen(ch1);

    for (int i = 0; i < len / 2; i++)
    {
        f = ch1[i];
        s = ch1[len - i - 1];
        ch1[i] = s;
        ch1[len - i - 1] = f;
    }
    // for (int i = 0; ch2[i] != 0; i++)
    // {
    //     ch1[len + i] = ch2[i];
    // }
    printf("%s", ch1);
}