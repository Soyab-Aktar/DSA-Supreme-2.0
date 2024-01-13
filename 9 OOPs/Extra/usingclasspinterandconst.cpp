#include <iostream>
using namespace std;
class abc
{
    int x;
    int *y;

public:
    abc()
    {
        x = 2;
        y = new int(5);
    }
    int getx() const // to make constant of class's function
    {
        return x;
    }
    void setx(int _value)
    {
        x = _value;
    }
    int gety()
    {
        return *y;
    }
    void sety(int _value)
    {
        *y = _value;
    }
};
int main()
{
    abc find;
    cout << find.getx() << endl;
    cout << find.gety() << endl;
}