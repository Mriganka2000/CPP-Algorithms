#include<iostream>

using namespace std;

int main()
{
    string str, enc;

    getline(cin, str);
    getline(cin, enc);

    string val1 = "", val2 = "";
    for(int i = 0; i < str.length(); i++)
    {
        char val = str[i];
        if(val == ' ')
        {
            val1 += val;
        }
        int temp = (int)val;
        if(temp > 96 && temp <= 122)
        {
            temp += 5;
            if(temp > 122)
            {
                temp -= 26;
            }
            val = (char)temp;
            val1 += val;
        }
    }

    for(int i = 0; i < enc.length(); i++)
    {
        char val = enc[i];
        if(val == ' ')
        {
            val2 += val;
        }
        int temp = (int)val;
        if(temp > 96 && temp <= 122)
        {
            temp -= 5;
            if(temp < 97)
            {
                temp += 26;
            }
            val = (char)temp;
            val2 += val;
        }
    }

    cout << val1 << endl;
    cout << val2 << endl;
}