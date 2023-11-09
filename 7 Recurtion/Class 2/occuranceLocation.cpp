#include <iostream>
using namespace std;
void occArr(int arr[], int size, int index, int target)
{
    if (index >= size)
    {
        return;
    }
    if (arr[index] == target)
    {
        cout << index << " ";
    }
    occArr(arr, size, index + 1, target);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 30, 30, 80, 30, 10};
    int size = 9;
    int index = 0;
    int target;
    cout << "Enter your target :";
    cin >> target;
    occArr(arr, size, index, target);
    return 0;
}