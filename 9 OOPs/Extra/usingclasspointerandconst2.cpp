#include <iostream>
using namespace std;
class abc
{
    int x;
    // int *y;
    int z;

public:
    // abc()
    // {
    //     x = 0;
    //     z = 0;
    //     // y = new int(0);
    // }
    abc(int _x, int _z)
    {
        x = _x;
        // y = new int(_y);
        z = _z;
    }
    int getx() const
    {
        return x;
    }
    void setx(int _value)
    {
        x = _value;
    }
    // int gety() const
    // {
    //     return *y;
    // }
    // void sety(int _value)
    // {
    //     *y = _value;
    // }
    int getz() const
    {
        return z;
    }
    void setz(int _value)
    {
        z = _value;
    }
};

void print(const abc &find)
{
    cout << find.getx() << " " << find.getz() << endl;
}
int main()
{
    abc find(2, 3);
    print(find);

    return 0;
}