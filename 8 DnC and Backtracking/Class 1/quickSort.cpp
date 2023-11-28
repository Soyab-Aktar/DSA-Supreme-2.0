#include <iostream>
using namespace std;
void quicksort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivot = end;
    int i = start - 1;
    int j = start;
    while (j < arr[pivot])
    {
        if (arr[j] < arr[pivot])
        {
            i++;
            swap(arr[j], arr[i]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);
    quicksort(arr, start, i - 1);
    quicksort(arr, i + 1, end);
}
int main()
{
    int arr[] = {7, 2, 1, 8, 6, 3, 5, 4};
    int size = 8;
    int start = 0;
    int end = size - 1;

    quicksort(arr, start, end);

    cout << "After sorting : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}