#include <iostream>

int main() {
    int side, length, breadth, cost;
    std::cin >> side;
    std::cin >> length;
    std::cin >> breadth;
    std::cin >> cost;

    if (side < length || side < breadth) {
        std::cout << "Invalid input" << std::endl;
    }
    else if (length < 0 || breadth < 0) {
        std::cout << "Invalid input" << std::endl;
    }
    else {
        int area = length * breadth;
        int total_area = side * side;
        int garden_area = total_area - area;
        double total = (garden_area * cost) / 100;
        std::cout << "Total cost :- " << total << std::endl;
    }
}
