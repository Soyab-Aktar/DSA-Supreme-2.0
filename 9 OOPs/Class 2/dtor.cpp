#include <iostream>
using namespace std;
class student
{
    int gf;

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
    student(int _age, int _nos, string _name, int _gf)
    {
        cout << "First Paramiterised ctor called ." << endl;
        age = _age;
        nos = _nos;
        name = _name;
        gf = _gf;
        v = new int(5);
    }
    // using dtor
    // if we dont weite dtor compiler autometically impliment dtor
    ~student()
    {
        cout << "dtor called .";
        // we can also use it to delete dynamically allocated memory
        delete v;
    }
    int getv()
    {
        return *v;
    }
};
int main()
{
    student s1(14, 6, "Viper", 1);
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.getv() << endl;
    return 0;
}