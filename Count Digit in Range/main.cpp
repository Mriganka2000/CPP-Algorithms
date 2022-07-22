#include<iostream>

using namespace std;

int countDigit(int start, int end, int digit)
{
    int count = 0;
    for (int i = start; i <= end; i++)
    {
        int temp = i;
        while(temp != 0)
        {
            if(temp % 10 == digit)
            {
                count++;
            }
            temp = temp / 10;
        }
    }
    return count;
}

int main()
{
    int start = 50, end = 60, digit = 5;

    cout << countDigit(start, end, digit);
}