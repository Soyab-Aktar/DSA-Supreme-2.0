// Changing element of a particular index

#include <iostream>
using namespace std;

void solve(int arr[], int size)
{
    arr[0] = 100;
}
int main()
{
    int arr[] = {1, 2, 3};
    int size = 3;
    solve(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}