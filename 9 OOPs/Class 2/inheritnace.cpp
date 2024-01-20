#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

// Parent class
class bird
{
public:
    int age, weight;
    int nol;
    string color;

    void eat()
    {
        cout << "Bird is eating .";
    }
    void fly()
    {
        cout << "Bird is flying .";
    }
};

// Child class
class sparrow : public bird
{
public:
    // ctor for sparrow
    sparrow(int _age, int _weight, int _nol, string _color)
    {
        age = _age;
        weight = _weight;
        nol = _nol;
        color = _color;
    }
    void grassing()
    {
        cout << "Sparrow is grassing .";
    }
};

// Child class
class pigon : public bird
{
public:
    // ctor for sparrow
    pigon(int _age, int _weight, int _nol, string _color)
    {
        age = _age;
        weight = _weight;
        nol = _nol;
        color = _color;
    }
    void guttering()
    {
        cout << "Pigon is guttering . 0";
    }
};
int main()
{
    sparrow s1(2, 4, 2, "Brown");
    cout << s1.color << endl;
    pigon s2(3, 2, 2, "Navy Blue");
    cout << s2.color << endl;
    return 0;
}