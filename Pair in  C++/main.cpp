#include <iostream>
#include <tuple>

int main() {
    std::pair<int, char> p;
    p.first = 1;
    p.second = 'a';
    std::cout << p.first << " " << p.second << std::endl;

    std::pair<int, char> p2;
    p2 = std::make_pair(2, 'n');
    std::cout << p2.first << " " << p2.second << std::endl;

    std::cout << "After Swap \n";
    p.swap(p2);
    std::cout << p.first << " " << p.second << std::endl;
    std::cout << p2.first << " " << p2.second << std::endl;

    int a, b;
    char c, d;
    std::tie(a, c) = p;
    std::tie(b, d) = p2;

    std::cout << a << " " << b << "\n";
    std::cout << c << " " << d << "\n";
}
