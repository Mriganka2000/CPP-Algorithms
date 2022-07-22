#include <iostream>

int main() {
    int num;
    std::cin >> num;
    int temp = num, n = 0, k = 0;

    while(num != 0) {
        num = num / 2;
        n++;
    }
    num = temp;

    int *arr = new int(n);
    while(num != 0) {
        arr[k++] = num % 2;
        num = num / 2;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i];
    }
}
