#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &it : v) {
            cin >> it;
        }

        string str;
        cin >> str;

        map<int, int> dislikes, likes;

        for (int i = 0; i < n; i++) {
            if (str[i] == '0') {
                dislikes[v[i]] = i;
            } else{
                likes[v[i]] = i;
            }
        }

        int num = 1;
        for (auto it : dislikes) {
            v[it.second] = num++;
        }
        for (auto it : likes) {
            v[it.second] = num++;
        }

        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }

        cout << endl;
    }
}
