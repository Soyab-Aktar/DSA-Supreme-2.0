#include <iostream>
using namespace std;
class student
{
    string gf;

public:
    int age;
    int nos;
    string name;
    int *v;

    // default ctor
    student()
    {
        cout << "Default ctor called ." << endl;
    }
    // paramiterise ctor
    student(int _age, int _nos, string _name, string _gf)
    {
        cout << "First Paramiterised ctor called ." << endl;
        age = _age;
        nos = _nos;
        name = _name;
        gf = _gf;
        v = new int(5);
    }
    // using dtor
    ~student()
    {
        cout << "dtor called .";
        delete v;
    }
    int getv()
    {
        return *v;
    }
    // to access private use
    // getter setter method
    string getgf() // this is getter method
    {
        return gf;
    }
    void setgf(string _gf)
    {
        gf = _gf;
    }
};
int main()
{
    student s1(14, 6, "Viper", "Reyna");
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.getv() << endl;
    cout << s1.getgf() << endl;
    cout << endl;

    s1.setgf("Jet");
    cout << s1.getgf() << endl;
    return 0;
}