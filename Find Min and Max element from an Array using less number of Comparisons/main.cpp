#include <iostream>

void find_min_max(const int *arr, int n) {
    int max, min, i = 0;

    if (n % 2 == 0) {
        if (arr[0] > arr[1]) {
            max = arr[0];
            min = arr[1];
        } else {
            max = arr[1];
            min = arr[0];
        }
        i = 2;
    } else {
        max = arr[0];
        min = arr[0];
        i = 1;
    }

    while (i < n - 1) {
        if (arr[i] > arr[i + 1]) {
            if (arr[i] > max) {
                max = arr[i];
            }
            if (arr[i + 1] < min) {
                min = arr[i + 1];
            }
        } else {
            if (arr[i + 1] > max) {
                max = arr[i + 1];
            }
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        i += 2;
    }

    std::cout << "Max :- " << max << std::endl;
    std::cout << "Min :- " << min << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the size of the array :- ";
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    find_min_max(arr, n);
}
