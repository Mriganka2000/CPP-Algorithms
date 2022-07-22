#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        if (arr.size() % 2 != 0) {
            return false;
        }

        map<int, int> m;
        for (auto item : arr) {
            m[(item % k + k) % k]++;
        }
        if (m[0] % 2 == 1) {
            return false;
        }

        for (int i = 1; i < k; ++i) {
            if (m[i] != m[k-i]) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr = {};
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int k;
    cin >> k;
    Solution solution;
    cout << solution.canArrange(arr, k);
}
