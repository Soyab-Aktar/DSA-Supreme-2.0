#include <iostream>
using namespace std;

void solve1(int *p)
{
    *p++;
    cout << "In solve1 function : p :" << p << endl;
    cout << "In solve1 function : &p :" << &p << endl;
    cout << "In solve1 function : *p :" << *p << endl;
}
void solve2(int *p)
{
    p++;
    cout << "In solve2 function : p :" << p << endl;
    cout << "In solve2 function : &p :" << &p << endl;
    cout << "In solve2 function : *p :" << *p << endl;
}
void solve3(int *&p)
{
    p++;
    cout << "In solve3 function : p :" << p << endl;
    cout << "In solve3 function : &p :" << &p << endl;
    cout << "In solve3 function : *p :" << *p << endl;
}

int main()
{
    int a = 5;
    int *p = &a;

    cout << "In main function : p :" << p << endl;
    cout << "In main function : &p :" << &p << endl;
    cout << "In main function : *p :" << *p << endl;
    cout << endl;

    solve1(p);
    cout << endl;
    solve2(p);
    cout << endl;
    solve3(p);

    return 0;
}