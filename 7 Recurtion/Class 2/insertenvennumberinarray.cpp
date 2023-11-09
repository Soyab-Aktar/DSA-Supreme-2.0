#include <iostream>
#include <vector>
using namespace std;
void insertarr(int arr[], vector<int> &v, int size, int index)
{
    if (index >= size)

    {
        return;
    }

    if (arr[index] % 2 == 0)
    {
        v.push_back(arr[index]);
    }
    insertarr(arr, v, size, index+1);

    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    vector<int> v;
    int index=0;
    insertarr(arr, v, size, index);
    for (int num : v)
    {
        cout << num << " ";
    }

    return 0;
}