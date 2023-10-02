// Sorting using Selection sort method

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int size)
{
    cout << "Your Unsorted Array is : ";
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }

    // sorting

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)  // for increasing order use ">" . for decreasing order use "<"
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
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

    selectionSort(arr, size);

    return 0;
    return 0;
}