// Sorting using Incertion sort method

#include <iostream>
#include <vector>
using namespace std;

void incertionSort(vector<int> &arr, int size)
{
    cout << "Your Unsorted Array is : ";
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }

    // sorting

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];

        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    cout << endl;

    // after sorting

    cout << "Your sorted Array is : ";
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }
}
int main()
{
    vector<int> arr{55, 78, 62, 80, 20, 90, 12};
    int size = arr.size();

    incertionSort(arr, size);

    return 0;
}