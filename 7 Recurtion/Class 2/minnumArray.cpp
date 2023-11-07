#include <iostream>
#include <limits.h>
using namespace std;
int minNum(int arr[], int &mini, int size, int index)
{
    if (index >= size)
    {
        return mini;
    }
    mini = min(mini, arr[index]);
    minNum(arr, mini, size, index + 1);
}
int main()
{
    int arr[] = {10, 50, 90, 70, 5, 1, 70, 11};
    int size = 8;
    int mini = INT_MAX;
    int index = 0;
    int final = minNum(arr, mini, size, index);

    cout << "Minimum number is : " << final;

    return 0;
}