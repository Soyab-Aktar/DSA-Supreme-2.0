#include <iostream>
using namespace std;
class abc
{
    int x;
    int *y;
    int z;

public:
    // old way to make ctor
    // abc(int _x, int _y, int _z)
    // {
    //     x = _x;
    //     y = new int(_y);
    //     z = _z;
    // }

    // new way to make ctor
    //  its called initialisation list
    abc(int _x, int _y, int _z) : x(_x), y(new int(_y)), z(_z)
    {
        // here you can intialisation again but not wok in const
        // also you can use it for something print
    }

    int getx() const
    {
        return x;
    }
    void setx(int _value)
    {
        x = _value;
    }
    int gety() const
    {
        return *y;
    }
    void sety(int _value)
    {
        *y = _value;
    }
    int getz() const
    {
        return z;
    }
    void setz(int _value)
    {
        z = _value;
    }
};
void printvalue(const abc &find1)
{
    cout << find1.getx() << " " << find1.gety() << " " << find1.getz() << endl;
}
int main()
{
    abc find1(1, 2, 3);
    printvalue(find1);
}