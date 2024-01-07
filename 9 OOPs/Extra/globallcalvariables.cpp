#include <iostream>
using namespace std;

int x = 99;
void fun()
{
    int x = 101;
    cout << x << endl;   // it will acess function local variable
    cout << ::x << endl; // global variable workes everywhere
    {
        int x = 69;
        cout << x << endl; // it will print scoped local variable
    }
}

int main()
{
    int x = 20;
    cout << x << endl;   // it is a local variable . its only works in function and scoped
    cout << ::x << endl; // to acess global variable

    {
        int x = 55;
        cout << x << endl; // here its print most recent local variable
    }

    fun();

    return 0;
}