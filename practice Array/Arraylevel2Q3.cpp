// Find unique element

#include <iostream>
using namespace std;

void unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    cout << "Unique element is : " << ans;
}

int main()
{
    int arr[] = {1, 5, 9, 7, 1, 5, 9};
    int size = 7;
    unique(arr, size);

    return 0;
}
