#include <iostream>
#include "stdlib.h"

int compare(const void* a, const void* b)
{
    const int* x = (int*) a;
    const int* y = (int*) b;

    if (*x > *y)
    {
        return 1;
    }
    else if (*x < *y)
    {
        return -1;
    }
    return 0;
}

int main()
{
    int n;
    int arr[100];
    int temp[100];

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    qsort(arr, n, sizeof (int), compare);

    int tail = 0;
    int head = 0;
    temp[head] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= 2 * temp[head])
        {
            head++;
            tail++;
            temp[tail] = arr[i];
        }
        else
        {
            tail++;
            temp[tail] = arr[i];
        }
    }

    std::cout << (tail - head + 1) << std::endl;

    return 0;
}
