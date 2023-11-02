#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    // pointer creation
    int *ptr = &a;
    int *qtr = ptr;

    // address of a
    cout << &a << endl;   // give address of a
    cout << *ptr << endl; // give value stored in address of a
    cout << ptr << endl;  // address of a
    cout << &ptr << endl; // give own address of ptr
    cout << qtr << endl;
    cout << &qtr << endl;
    cout << *qtr << endl;

    return 0;
}