#include <iostream>
using namespace std;
bool searching(int arr[], int size, int target, int index)
{
    if (index >= size)
    {
        return false;
    }
    if (arr[index] == target)
    {
        return true;
    }
    bool functionans = searching(arr, size, target, index + 1);
    return functionans;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10;
    int target;
    int index = 0;
    cout << "Enter your target : ";
    cin >> target;

    bool finalans = searching(arr, size, target, index);

    if (finalans == 1)
    {
        cout << "Target found .";
    }
    else
    {
        cout << "Not found .";
    }

    return 0;
}