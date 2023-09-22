// Sorting all the neg numbers in left size

#include <iostream>
using namespace std;

void sorting(int arr[], int size)
{
    int left = 0;
    for (int index = 0; index < size; index++)
    {
        if (arr[index] < 0)
        {
            swap(arr[index], arr[left]);
            left++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {-59, 47, 0, 39, -4, -63, 79, 90, -100};
    int size = 9;

    sorting(arr, size);
}