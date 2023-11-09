#include <iostream>
using namespace std;
int searching(int arr[], int size, int target, int index)
{
    if (index >= size)
    {
        return -1;
    }
    if (arr[index] == target)
    {
        return index;
    }
    searching(arr, size, target, index + 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10;
    int target;
    int index = 0;
    cout << "Enter your target : ";
    cin >> target;

    int finalans = searching(arr, size, target, index);

    if (finalans == -1)
    {
        cout << "Target is not found .";
    }
    else
    {
        cout << "Target found in index number is : " << finalans;
    }

    return 0;
}