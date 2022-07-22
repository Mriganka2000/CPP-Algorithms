#include <iostream>

using namespace std;

int main()
{
    int a, b, n, t;
    cin >> t;
    string str;
    while (t--)
    {
        cin >> n;
        cin >> a;
        cin >> b;
        cin >> str;
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (str[i] != str[i-1]) {
                count++;
            }
        }
        cout << (a * n) + max(b*n , b * (count/2 +1));
    }
}
