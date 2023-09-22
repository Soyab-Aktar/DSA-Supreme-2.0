// Rotate array by right size by k=3;

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr, int size)
{
    vector<int> ans(size);
    int k = 3;

    for (int index = 0; index < size; index++)
    {
        int newIndex = (index + k) % size;
        ans[newIndex] = arr[index];
    }

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60};
    int size = arr.size();

    rotate(arr, size);
}