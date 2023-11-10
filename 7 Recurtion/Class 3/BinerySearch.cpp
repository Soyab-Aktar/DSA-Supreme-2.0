#include <iostream>
using namespace std;
int bineryarr(int arr[], int start, int end, int target)
{
    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[mid] < target)
    {
        start = mid + 1;
        return bineryarr(arr, mid + 1, end, target);
    }
    else
    {
        return bineryarr(arr, start, mid - 1, target);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int start = 0;
    int end = size - 1;
    int target;
    cout << "Enter your target : ";
    cin >> target;

    int find = bineryarr(arr, start, end, target);

    if (find != -1)
    {
        cout << "Target found at : " << find;
    }
    else
    {
        cout << "Not found .";
    }

    return 0;
}