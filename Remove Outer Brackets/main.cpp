#include<iostream>

using namespace std;

string removeBracket(string str)
{
    string res = "";
    int j = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == 41)
        {
            j--;
        }
        if(j != 0)
        {
            res += str[i];
        }
        if(str[i] == 40)
        {
            j++;
        }
    }
    return res;
}

int main()
{
    string str = "(()())(())";

    cout << removeBracket(str);
}
