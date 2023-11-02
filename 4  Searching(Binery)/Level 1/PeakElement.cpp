// find peak element of array

#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int> &arr, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}
int main()
{
    vector<int> arr{10, 20, 30, 90, 80, 70, 60, 50, 40};
    int size = arr.size();

    int peakNumber = peakElement(arr, size);

    cout << "Array's peak element index is : " << peakNumber;

    return 0;
}