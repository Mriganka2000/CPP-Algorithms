#include <stdio.h>

int str_cmp(char *str1, char *str2)
{
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2) {
            return 0;
        } else {
            str1++;
            str2++;
        }
    }
    return 1;
}

int main()
{
    char str1[] = "abcde";
    char str2[] = "abcde";
    printf("%d", str_cmp(str1, str2));
}
