#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[40] = "minhaj";
    char ch2[40] = "tapader";
    char temp[40];
    strcpy(temp, ch1);
    strcpy(ch1, ch2);
    strcpy(ch2, temp);

    printf("%s\n", ch1);
    printf("%s\n", ch2);
}