#include<stdio.h>

int bitwiseadd(int x, int y)
{
    while (y != 0)
    {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int main()
{
    int num1 = 5, num2 = 3;
    printf("Enter two numbers to perform addition using bitwise operators: ");
    scanf("%d%d", &num1, &num2);
    printf("Sum is %d", bitwiseadd(num1, num2));
    return 0;
}