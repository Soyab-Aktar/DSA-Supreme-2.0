#include <iostream>
using namespace std;
class abc
{
public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // need to create a well worked  copy ctor
    abc(const abc &obj)
    {
        x = obj.x;
        y = new int(*obj.y);
    }

    void print()
    {
        cout << "X = " << x << endl;
        cout << "PTR of Y = " << &y << endl;
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