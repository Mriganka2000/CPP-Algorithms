#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (j != 1 && j != n && i != 1 && i != n) {
                std::cout << " ";
            } else {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
}
