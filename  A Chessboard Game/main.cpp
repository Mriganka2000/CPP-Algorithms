#include <iostream>
#include <map>

std::map<std::pair<int, int>, bool> mp;

bool give_state(int x, int y) {
    if (x < 1 || x > 15 || y < 1 || y > 15) {
        return true;
    }

    if (mp.count({x, y})){
        return mp[{x, y}];
    }

    bool ans = true;

    ans &= give_state(x - 2, y + 1);
    ans &= give_state(x - 2, y - 1);
    ans &= give_state(x + 1, y - 2);
    ans &= give_state(x - 1, y - 2);
    ans = !ans;

    return mp[{x, y}] = ans;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int x, y;
        std::cin >> x >> y;

        if (give_state(x, y)) {
            std::cout << "1" << std::endl;
        } else {
            std::cout << "2" << std::endl;
        }
    }
}
