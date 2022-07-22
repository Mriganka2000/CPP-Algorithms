#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t ;
    std::cin >> t;

    while (t--) {
        int n, nim_sum;
        std::cin >> n;
        std::vector<int> s(n);

        for (int i = 0; i < s.size(); ++i) {
            std::cin >> s[i];
            nim_sum ^= s[i];
        }

        std::sort(s.begin(), s.end());

        if (s[0] == s[s.size() - 1] && s[0] == 1) {
            if (s.size() % 2  == 0) {
                printf("First");
            } else {
                printf("Second");
            }
        } else {
            if (nim_sum) {
                printf("First");
            } else {
                printf("Second");
            }
        }
    }
}
