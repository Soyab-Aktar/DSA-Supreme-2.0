#include <iostream>
using namespace std;
bool checkArr(int arr[], int size, int index)
{
    if (index >= size)
    {
        return true;
    }
    if (arr[index] > arr[index - 1])
    {
        return checkArr(arr, size, index + 1);
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    int index = 1;
    bool find = checkArr(arr, size, index);
    if (find)
    {
        cout << "It is a sorted Array";
    }
    else
    {
        cout << "Not .";
    }

    return 0;
}