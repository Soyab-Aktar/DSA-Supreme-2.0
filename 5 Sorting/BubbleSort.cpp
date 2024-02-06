// Sorting using bubble sort method

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int size)
{
    cout << "Your Unsorted Array is : ";
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }

    // sorting

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1]) // for increasing order use ">" . for decreasing order use "<"
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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

    bubbleSort(arr, size);

    return 0;
}