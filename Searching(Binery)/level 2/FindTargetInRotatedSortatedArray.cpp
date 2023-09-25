// Find target in rotated and sorted array

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
        else if (arr[mid] < arr[start])
        {
            end = mid - 1;
        }
        else if (arr[mid] > arr[start])
        {
            start = mid + 1;
        }

        else if (arr[start] == arr[end])
        {
            return start;
        }

        mid = start + (end - start) / 2;
    }
}

int binarySearch(vector<int> &arr, int size, int target, int pivotIndex)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int searchInRotatedArray(vector<int> &arr, int size,int target)
{
    int start=0;
    int end =size-1;

    int pivotIndex=pivot(arr,size);

    if (pivotIndex == -1)
    {
        return binarySearch(arr, start, end, target);
    }

    if (arr[pivotIndex] == target)
    {
        return pivotIndex;
    }
    if (arr[0] <= target)
    {
        return binarySearch(arr, start, pivotIndex - 1, target);
    }
    return binarySearch(arr, pivotIndex + 1, end, target);

    
}

int main()
{
    vector<int> arr{11, 12, 13, 14, 15, 16, 2, 4, 6, 8, 10};
    int size = arr.size();

    int target;
    cout << "Enter your target : ";
    cin >> target;

    int foundIndex = searchInRotatedArray(arr,size, target);

    if (foundIndex == -1)
    {
        cout << "Not found." << endl;
    }
    else
    {
        cout << "Found at index " << foundIndex << "." << endl;
    }

    return 0;
}