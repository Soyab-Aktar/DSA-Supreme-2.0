#include <iostream>
using namespace std;
void sortA(int arr[], int start, int end, int size)
{
    if (start <= end)
    {
        return;
    }

    int i = start - 1;
    int j = start;
    int pivot = arr[end];

    while (i < pivot)
    {
        if (arr[j] < arr[pivot])
        {
            j++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);

    sortA(arr, start, i - 1, size);
    sortA(arr, i + 1, end, size);
}
int main()
{
    int arr[] = {7, 2, 1, 8, 6, 3, 5, 4};
    int size = 8;
    int start = 0;
    int end = size - 1;
    int i = start - 1;
    int j = start;

    cout << "Before merge sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sortA(arr, start, end, size);

    cout << "After merge sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
