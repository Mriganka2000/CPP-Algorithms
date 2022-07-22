#include <stdio.h>
#define MAX 100

int main() {
    char str[MAX];
    int i = 0, n, count = 0, max = 0, flag = 0;
    printf("Enter the length of the string :- ");
    scanf("%d", &n);
    printf("Enter the string :- ");
    scanf("%s", str);

    for (i = 0; i < n; i++) {
        if (str[i] == '1') {
            count++;
            flag = 1;
        } else if (str[i] == '0' || flag == 1) {
            count = 0;
            flag = 0;
        }
        if (count > max) {
            max = count;
        }
    }

    printf("%d\n", max);

    return 0;
}