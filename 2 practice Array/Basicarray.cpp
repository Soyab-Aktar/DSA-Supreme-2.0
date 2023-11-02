#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[] = {6, 7, 8, 9, 10};
    int crr[5] = {11, 12};

    // int[3]={13,14,15,16};
    // this type of array only store 3 elements

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << brr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << crr[i] << " ";
    }
}