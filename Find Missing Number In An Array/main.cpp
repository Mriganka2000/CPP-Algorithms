#include <iostream>

void missing_num(int *arr, int n) {
    int count = 0;
    for (int i = arr[0]; i <= arr[n -1]; ++i) {
        if (arr[count] == i) {
            count++;
        } else {
            std::cout << i << std::endl;
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    missing_num(arr, n);
}
