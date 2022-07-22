#include <iostream>

int main() {
    int a, n, d;
    std::cin >> a;
    std::cin >> n;
    std::cin >> d;

    int temp = 2 * a + (n - 1) * d;
    int sum = n * temp / 2;

    int result = 0;
    while (sum != 0) {
        int rem = sum % 10;
        result = result * 10 + rem;
        sum = sum / 10;
    }
    std::cout << result;
}
