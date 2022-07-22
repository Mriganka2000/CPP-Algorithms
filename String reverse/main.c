#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    if(*str == '\0')
    {
        return;
    }
    reverse(str + 1);
    printf("%c", *str);
}

char *rev(char *str, int len)
{
    int i = 0;
    char temp;

    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    return str;
}

int main()
{
    char str[100];
    gets(str);
    int len = strlen(str);
    char *result = rev(str, len);
    printf("%s\n", result);
    reverse(str);
}