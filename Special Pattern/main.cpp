#include <iostream>

int main()
{
    int count = 1, n;
    std::cin >> n;
    int j, i;

    for (i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            for(j = 1; j <= 2*i-1; j++)
            {
                if(j % 2 != 0)
                {
                    std::cout << count++ << " ";
                }
                else
                {
                    std::cout << "$ ";
                }
            }
        }
        else
        {
            count = count + i;
            for(j = 1; j <= 2*i-1; j++)
            {
                if(j % 2 != 0)
                {
                    std::cout << --count << " ";
                }
                else
                {
                    std::cout << "$ ";
                }
            }
            count = count + i;
        }
        std::cout << std::endl;
    }
}
