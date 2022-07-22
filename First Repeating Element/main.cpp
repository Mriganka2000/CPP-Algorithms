#include <iostream>
#define MAX 1000000

int first_repeating(int arr[], int n) {
    int map[MAX];
    for (int i = 0; i < MAX; i++) {
        map[i] = -1;
    }

    int min = INT32_MAX;

    for (int i = 0; i < n; ++i) {
        if (map[arr[i]] != -1) {
            min = std::min(min, map[arr[i]]);
        } else {
            map[arr[i]] = i;
        }
    }

    if (min == INT32_MAX) {
        return -1;
    } else {
        return min + 1;
    }
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << first_repeating(arr, n);
}
