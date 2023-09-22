// Find missing element

#include <iostream>
#include <vector>
using namespace std;

int missing(vector<int> &arr, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        int diff = arr[mid] - mid;
        if (diff == 1)
        {
            start = mid + 1;
        }

        else
        {
            ans = mid;
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    if (ans + 1 == 0)
    {
        return size + 1;
    }
    else
    {
        return ans + 1;
    }
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8};
    int size = arr.size();

    int find = missing(arr, size);

    cout << "Your missing element is : " << find;

    return 0;
}