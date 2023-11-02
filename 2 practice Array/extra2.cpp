// Sorting 0's and 1's and 2's

#include <iostream>
#include <vector>
using namespace std;

void sorting(vector<int> &arr, int size)
{
    int left = 0;
    int right = size - 1;
    int index = 0;

    while (index <= right)
    {
        if (arr[index] == 0)
        {
            swap(arr[index], arr[left]);
            left++;
            index++;
        }

        else if (arr[index] == 2)
        {
            swap(arr[index], arr[right]);
            right--;
        }

        else
        {
            index++;
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
    vector<int> arr{1, 0, 2, 2, 1, 0, 1, 0};
    int size = arr.size();

    sorting(arr, size);

    return 0;
}