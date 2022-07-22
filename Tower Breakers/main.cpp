#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int m, n;
        std::cin >> n >> m;

        if (m == 1 || n % 2 == 0) {
            std::cout << 2 << std::endl;
        } else {
            std::cout << 1 << std::endl;
        }
    }
}
