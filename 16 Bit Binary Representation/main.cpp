#include<iostream>

int main()
{
    unsigned int num;
    int i;
    std::cin >> num;
    for(i=0; i<16; i++)
    {
        printf("%d", (num<<i & 1<<15)?1:0);
    }
    return 0;
}