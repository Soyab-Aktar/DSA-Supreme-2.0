#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    // pointer creation
    int *ptr = &a;

    // address of a
    cout<<a<<endl;
    cout << &a << endl;   // give address of a
    cout << *ptr << endl; // give value stored in address of a
    cout << ptr << endl;  // address of a
    cout << &ptr << endl; // give own address of ptr

    return 0;
}