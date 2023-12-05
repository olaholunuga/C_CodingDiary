#include <stdio.h>

void mergesort(int arr[10]);
void merge(int arr[10], int start, int end);

void main()
{
    int arr[10];
    arr = [7, 6, 9, 5, 1, 3, 2, 4, 0, 8];
    mergesort(arr);
}

void mergesort(int arr[10])
{
    for(int i = 0; i < 10; i++)
    {
        merge(arr, i, i + 1);
    }
}

void merge(int arr[10], int start, int end)
{
    int i = 0;
    int temp;
    while(i <= start)
    {
        if(arr[i] > arr[end])
        {
            temp = arr[i];
            arr[i] = arr[end];
            arr[end] = temp;
        }
        i++;
    }
}