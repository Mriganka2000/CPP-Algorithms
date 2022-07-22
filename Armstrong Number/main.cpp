#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    int temp = n, sum = 0;
    while (n != 0) {
        int rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if (temp == sum) {
        std::cout << "Aram strong";
    } else {
         std::cout << "Not Armstrong";
    }
}
