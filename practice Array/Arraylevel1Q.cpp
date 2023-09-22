// 1- input 10 size of array
// 2- print double of each element

#include <iostream>
using namespace std;
int main()
{
    int size = 10;
    int *arr = new int[10];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter your element " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << 2 * arr[i] << " ";
    }

    return 0;
}