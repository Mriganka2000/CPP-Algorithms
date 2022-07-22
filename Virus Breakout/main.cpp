#include <iostream>
#include <cstring>

using namespace std;

bool match(string text, string pattern) {
    int n = 0;
    for (int i = 0; i < text.length(); ++i) {
        if (text[i] == pattern[n]) {
            n++;
        }
    }
    if (n == pattern.length()) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string text, pattern;
    cout << "Enter the text :- ";
    cin >> text;
    cout << "Enter the pattern :- ";
    cin >> pattern;

    if (match(text, pattern)) {
        cout << "Positive" << endl;
    } else {
        cout << "Negative" << endl;
    }
}
