#include <iostream>
using namespace std;
int main()
{
    const int a = 10;
    cout << a << endl;
    // a=5;  reason why we cant assign a new value in a variable,because we constant the value of the variable,it cant be changed
    // int *p=&a;
    // *p=5;            because in new compiler dont use this method to change value of const variable
    // cout<<a<<endl;
    return 0;
}