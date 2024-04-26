#include <iostream>
using namespace std;

class vector
{
    int x, y;

public:
    // vector(int x,int y)
    // {
    //     this ->x=x;
    //     this->y=y;
    // }

    // without ctor we are going to use init list

    vector(int x, int y) : x(x), y(y) {}
    // inside bracket x is input member
    // outside of bracket x is class member

    void operator-(const vector &src)
    {
        this->x -= src.x;
        this->y -= src.y;
    }
    // void operator++()
    // {
    //     this->x++;
    //     this->y++;
    // }

    void display()
    {
        cout << "X : " << x << " , Y : " << y << endl;
    }
};

int main()
{
    vector v1(2, 5);
    vector v2(8, 9);
    v1 - v2;
    // ++v1;
    v1.display();
}