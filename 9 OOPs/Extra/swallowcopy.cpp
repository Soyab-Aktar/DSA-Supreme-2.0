#include <iostream>
using namespace std;
class abc
{
public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // copy ctor by default created;

    void print()
    {
        cout << "X = " << x << endl;
        cout << "PTR of Y = " << y << endl;
        cout << "Value in Y = " << *y << endl;
    }
};

int main()
{
    abc p1(5, 8);
    abc p2 = p1;
    p1.print();

    cout << endl;

    p2.print();

    cout << endl;

    *p2.y = 50;
    p1.print();

    cout << endl;

    p2.print();
}