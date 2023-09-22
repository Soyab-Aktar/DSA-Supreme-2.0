// Find total occurence

#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> &arr, int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    return ans;
}

int lastOccur(vector<int> &arr, int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] < target)
        {
            start = mid + 1;
        }

        else if (arr[mid > target])
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int main()
{
    vector<int> arr{1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 8, 8, 9};
    int size = arr.size();
    int target;

    cout << "This is your Array - "
         << "1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 8, 8, 9" << endl;
    cout << "Enter your target :";
    cin >> target;

    int lastO = lastOccur(arr, size, target);
    int firstO = firstOccur(arr, size, target);

    int totalCoccurence = lastO - firstO + 1;

    cout << "Total Occurence is : " << totalCoccurence;

    return 0;
}