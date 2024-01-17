#include <iostream>
using namespace std;
class student
{
    int gf;

public:
    int age;
    int nos;
    string name;

    // default ctor
    student()
    {
        cout << "Default ctor called ." << endl;
    }
    // paramiterise ctor 1
    student(int _age, int _nos, string _name, int _gf)
    {
        cout << "First Paramiterised ctor called ." << endl;
        age = _age;
        nos = _nos;
        name = _name;
        gf = _gf;
    }
    // paramiterise ctor 2
    student(int _age, int _nos, string _name)
    {
        cout << "Second Paramiterised ctor called ." << endl;
        age = _age;
        nos = _nos;
        name = _name;
    }
    // Copt ctor for paramiterise ctor 1
    student(const student &srcobj)
    {
        cout << "Copy ctor called ." << endl;
        age = srcobj.age;
        nos = srcobj.nos;
        name = srcobj.name;
        gf = srcobj.gf;
    }
};
int main()
{
    student s1(14, 6, "Viper", 1);
    cout << s1.name << endl;
    cout << s1.age << endl;
    student s3 = s1;
    cout << s3.name << endl;
    cout << s3.age << endl;
    student s2(20, 6, "yuru");
    cout << s2.name << endl;
    cout << s2.age << endl;
    student s4 = s2; //we need to write this way
    cout << s4.name << endl;
    cout << s4.age << endl;

    return 0;
}