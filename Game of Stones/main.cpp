#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        if (n % 7 <= 1) {
            std::cout << "Second" << std::endl;
        }
        else {
            std::cout << "First" << std::endl;
        }
    }
}
