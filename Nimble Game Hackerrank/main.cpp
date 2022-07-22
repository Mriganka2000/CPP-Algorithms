#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, nim_sum = 0;
        std::cin >> n;

        for (int i = 0; i < n; ++i) {
            int x;
            std::cin >> x;
            x %= 2;
            if (x) {
                nim_sum ^= i;
            }
        }

        if (nim_sum > 0) {
            std::cout << "First \n";
        } else {
            std::cout << "Second \n";
        }
    }
}
