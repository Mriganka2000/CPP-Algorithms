#include <stdio.h>

int main() {
    int n, i;
    int arr[n];
    printf("Enter the number of bowls :- ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long val = 0;

    for (i = 0; i < n; i++) {
        val = 10*val + arr[i];
    }

    val = val + 1;
    for (i = n - 1; i >= 0; i--) {
        int rem = val % 10;
        val = val / 10;
        if (rem > arr[i]) {
            break;
        }
    }

    if (i >= 0) {
        printf("%d", i+1);
    } else {
        printf(0);
    }

    return 0;
}
