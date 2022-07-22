#include <stdio.h>

void sort(int arr[], int n)
{
    int i = 0, j = 0;
    for (i = 0; i < n-1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[100], n, i;
    printf("Enter the size of the array :- ");
    scanf("%d", &n);
    printf("Enter the elements of the array :- \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    printf("The sorted array is :- \n");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
