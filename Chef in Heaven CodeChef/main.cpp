#include <iostream>
#define ll unsigned long long int

int main() {
    ll t;
    std::cin >> t;

    while (t--) {
        ll n;
        std::cin >> n;
        std::string str;
        std::cin >> str;
        ll zero = 0, one = 0;
        bool flag = false;
        for (int i = 0; i < n; ++i) {
            if (str[i] == '0') {
                zero++;
            } else {
                one++;
            }
            if (one >= zero) {
                flag = true;
                std::cout << "YES" << std::endl;
                break;
            }
        }
        if (!flag) {
            std::cout << "NO" << std::endl;
        }
    }
}
