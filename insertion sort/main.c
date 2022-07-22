#include <stdio.h>

void sort(int arr[], int n)
{
    int i = 0, key, j;
    for (i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int arr[100], n, i;
    printf("Enter the size of the array :- ");
    scanf("%d", &n);
    printf("Enter the elements :- \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
