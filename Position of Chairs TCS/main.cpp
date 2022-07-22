#include <iostream>

int main() {
    std::string str;
    std::cin >> str;
    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        if ((str[i] - 96) == (i + 1)) {
            count++;
        }
    }

    std::cout << count << std::endl;
}
