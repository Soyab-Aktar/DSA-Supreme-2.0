// Extreme print of array for odd

#include <iostream>
using namespace std;

void extreme(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left];
        }
        
        else if(left < right)
        {

            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
        left++;
        right--;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    extreme(arr, size);

    return 0;
}