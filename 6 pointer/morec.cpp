#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    // pointer creation
    int *ptr = &a;

    cout << a << endl;
    cout << &a << endl;   // give address of a
    cout << *ptr << endl; // give value stored in address of a
    cout << ptr << endl;  // address of a
    cout << &ptr << endl; // give own address of ptr
    cout << (*ptr)++ << endl;
    cout << ++(*ptr) << endl;
    cout << (*ptr) / 2 << endl;
    cout << (*ptr) - 2 << endl;

    return 0;
}