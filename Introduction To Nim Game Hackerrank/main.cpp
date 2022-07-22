#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, nim_sum = 0;
        std::cin >> n;
        std::vector<int> pile(n);

        for (int i = 0; i < pile.size(); ++i) {
            std::cin >> pile[i];
            nim_sum ^= pile[i];
        }

        if (nim_sum == 0) {
            std::cout << "Second" << std::endl;
        } else {
            std::cout << "First" << std::endl;
        }
    }
}
