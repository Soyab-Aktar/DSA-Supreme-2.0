#include <iostream>
using namespace std;

class hello
{
    int x;

public:
    hello(int _x) : x(_x) {}

    friend class hi;
};

class hi
{
public:
    void getxvalue(const hello &a)
    {
        cout << "The value of x is: " << a.x << endl;
    }
};

int main()
{
    hello a(5);
    hi b;
    b.getxvalue(a);
    return 0;
}
