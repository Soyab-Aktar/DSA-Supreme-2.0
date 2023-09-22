// Sorting 0's and 1's

#include <iostream>
using namespace std;

void sorting(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    // Swapping

    for (int index = 0; index < right; index++)
    {
        if (arr[index] == 0)
        {
            swap(arr[index], arr[left]);
            left++;
        }
        if (arr[index] == 1)
        {
            swap(arr[index], arr[right]);
            right--;
        }
    }

    // printing

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    int size = 9;
    sorting(arr, size);

    return 0;
}