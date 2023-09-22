#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter your array size : ";
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter your element " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}