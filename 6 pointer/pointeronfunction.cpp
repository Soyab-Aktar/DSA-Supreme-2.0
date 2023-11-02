#include <iostream>
using namespace std;

void solve(int arr[], int size)
{
    cout << "In solve function , arr : " << arr << endl;
    cout << "In solve function , &arr : " << &arr << endl; // only address diff
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    solve(arr, 5); // always go address of a datatype in a function if write int arr[]

    cout << "In main function, arr : " << arr << endl;
    cout << "In main function , &arr: " << &arr << endl;

    return 0;
}