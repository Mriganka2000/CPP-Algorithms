#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= n-i+1; j++) {
            if (j != 1 && i != 1) {
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }
        for (int j = 1; j <= n-i; j++) {
            if (j != n-i && i != n && i != 1) {
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
}
