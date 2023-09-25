// Find pivot point of array

#include <iostream>
#include <vector>
using namespace std;

int pivot(vector<int> &arr, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }

        else if (arr[mid] > arr[mid - 1])
        {
            return mid;
        }

        else if (arr[mid] > arr[start])
        {
            start = mid + 1;
        }

        else if (arr[mid] < arr[start])
        {
            end = mid - 1;
        }

        else if(arr[start]==arr[end])
        {
            return start;
        }

        mid = start + (end - start) / 2;
    }
}
int main()
{
    vector<int> arr{11, 12, 13, 14, 15, 16, 2, 4, 6, 8, 10};
    int size = arr.size();

    int pivotNumber = pivot(arr, size);

    cout << "Pivot number is : " << arr[pivotNumber];

    return 0;
}