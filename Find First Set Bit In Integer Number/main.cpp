#include <iostream>

int find_position(int n) {
    if (!n) {
        return -1;
    }
    int count = 0;

    while (n) {
        count++;
        if (n & 1) {
            n = n >> 1;
            break;
        }
        n = n >> 1;
    }

    if (!n) {
        return count;
    } else {
        return -1;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << find_position(n) << std::endl;
}
