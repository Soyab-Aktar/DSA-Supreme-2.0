#include <iostream>
using namespace std;

class fruit
{
public:
    int weight;
    string color;
    string name;

    void healthy()
    {
        cout << "It makes you healthy..." << endl;
    }
};

class mango : public fruit
{
public:
    void summer()
    {
        cout << "Only found in summer..." << endl;
    }
};

class faghli : public mango
{
public:
    faghli(int _weight, string _color, string _name)
    {
        weight = _weight;
        color = _color;
        name = _name;
    }

    void size()
    {
        cout << "Big size of mango..." << endl;
    }
};

int main()
{
    faghli f1(56, "Redgreen", "Nice");
    f1.healthy(); // Call the inherited function
    f1.summer();  // Call the mango-specific function
    f1.size();    // Call the faghli-specific function
    return 0;
}
