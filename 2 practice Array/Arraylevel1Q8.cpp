// swapping array

#include <iostream>
using namespace std;

void swapping(int arr[5], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {2, 9, 5, 1, 50};
    int size = 5;
    swapping(arr, size);
    return 0;
}