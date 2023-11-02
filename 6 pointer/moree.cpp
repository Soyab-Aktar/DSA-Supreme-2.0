#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int *p = arr;
    int *q = arr + 1;

    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    cout << q << endl;
    cout << *q << endl;
    cout << &q << endl;
    cout << *p + 1 << endl;
    cout << *(p) + 2 << endl;
    cout << *(p) + 3 << endl;

    return 0;
}