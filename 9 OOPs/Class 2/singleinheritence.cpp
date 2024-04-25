#include <iostream>
using namespace std;
class bird
{
public:
    int age;
    string color;
    string name;

    void fly()
    {
        cout << "Eating ..." << endl;
    }
};

class eagle : public bird
{
public:
    eagle(int _age, string _color, string _name)
    {
        age = _age;
        color = _color;
        name = _name;
        cout << "CTOR called...." << endl;
    }

    void hunt()
    {
        cout << "Hunting..." << endl;
    }
};
int main()
{
    eagle e1(6, "White-Brown", "Hilly Eagle");
    cout << e1.name << endl;
    e1.hunt();
    e1.fly();
    return 0;
}