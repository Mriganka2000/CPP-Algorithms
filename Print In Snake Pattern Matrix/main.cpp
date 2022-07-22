#include <iostream>
#define MAX 3

int main()
{
    int pos = 1;
    int arr[][MAX] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for (int i = 0; i < MAX; i++)
    {
        if (pos == 1)
        {
            for (int j = 0; j < MAX; j++)
            {
                std::cout << arr[i][j] << " ";
            }
            pos = 0;
        }
        else
        {
            for (int j = MAX-1; j >= 0; j--)
            {
                std::cout << arr[i][j] << " ";
            }
            pos = 1;
        }
        std::cout << std::endl;
    }
}
