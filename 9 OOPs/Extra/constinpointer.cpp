#include <iostream>
using namespace std;
int main()
{
    // const data , non const pointer
    const int *a = new int(5);
    cout << *a << endl;
    // *a=4; its give error , we cant change assign value

    // const pointer ,non const data

    int *const b = new int(99);
    cout << *b << endl;
    // Changing data
    *b = 77;
    cout << *b << endl;
    int x = 50;
    // b=&x;  we cant change pointer

    // const data , const pointer

    const int *const c = new int(11);
    cout << *c << endl;
    // here we cant chaange data and pointer

    return 0;
}