// Binery Search in nearly sorted array

#include <iostream>
#include <vector>
using namespace std;
int nearlySorted(vector<int> &arr, int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid - 1] == target && mid - 1 >= 0)
        {
            return mid - 1;
        }
        else if (arr[mid + 1] == target && mid + 1 < size)
        {
            return mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}
int main()
{
    vector<int> arr{20, 10, 30, 50, 40, 70, 60};
    int size = arr.size();
    int target;
    cout << "Enter your target : ";
    cin >> target;

    int find = nearlySorted(arr, size, target);

    if (find == -1)
    {
        cout << "Not found .";
    }
    else
    {
        cout << "Found .";
    }

    return 0;
}