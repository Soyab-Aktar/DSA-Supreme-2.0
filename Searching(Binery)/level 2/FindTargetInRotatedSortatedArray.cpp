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

        else if (arr[start] == arr[end])
        {
            return start;
        }

        mid = start + (end - start) / 2;
    }
}

int searching(vector<int> &arr, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int lastupdate(vector<int> &arr, int target, int size)
{
    int pivotNumber = pivot(arr, size);
    int result = -1;

    if (arr[pivotNumber] == target)
    {
        result = pivotNumber;
        return result;
    }
    else if (arr[0] <= target && arr[pivotNumber - 1] >= target)
    {
        result = searching(arr, target, 0, pivotNumber - 1);
        return result;
    }
    else
    {
        result = searching(arr, target, pivotNumber + 1, size - 1);
        return result;
    }

    return result;
}
int main()
{
    vector<int> arr{11, 12, 13, 14, 15, 16, 2, 4, 6, 8, 10};
    int size = arr.size();
    int target;

    cout << "Enter your element : ";
    cin >> target;

    int find = lastupdate(arr, target, size);

    if (find == -1)
    {
        cout << "Element is not found .";
    }
    else
    {
        cout << "Element is found .";
    }

    return 0;
}