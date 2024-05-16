#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;

    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[lb], arr[end]);
    return end;
}

void quicksort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int pivotIndex = partition(arr, lb, ub);
        quicksort(arr, lb, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, ub);
    }
}

int main()
{
    int arr[] = {5, 3, 4, 7, 8, 2, 1, 9, 10};
    int size = 9;
    int lb = 0;
    int ub = size - 1;

    cout << "Original array: ";
    print(arr, size);

    quicksort(arr, lb, ub);

    cout << "Sorted array: ";
    print(arr, size);

    return 0;
}
