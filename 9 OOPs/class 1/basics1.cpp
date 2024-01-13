#include <iostream>
#include <vector>
#include <string>
using namespace std;
// created a class with name of student
class student
{
private:
    string gf;

public:
    // this is a class's properties
    int id;
    int age;
    string name;
    int nos;

    // using ctor: Default ctor asign garbage value

    student()
    {
        cout << "ctor called in programe" << endl;
    }
    // using ctor: paramiterised ctor

    student(int _id, int _age, string _name, int _nos, string _gf)
    {
        id = _id;
        age = _age;
        name = _name;
        nos = _nos;
        gf = _gf;
        cout << "paramiterised ctor" << endl;
    }
    // using ctor: paramiterised ctor without gf

    student(int _id, int _age, string _name, int _nos)
    {
        id = _id;
        age = _age;
        name = _name;
        nos = _nos;
        cout << "paramiterised ctor without gf" << endl;
    }

    // this is a class's behaviours
    void study()
    {
        cout << "Studying" << endl;
    }
    void bunk()
    {
        cout << "bunking" << endl;
    }
    void game()
    {
        cout << "gaming" << endl;
    }

private:
    void gfchatting()
    {
        cout << "Chatting " << endl;
    }
};

int main()
{
    // as a example int a , int b . int is variables , so we can tell that student is custom variables

    student s1;
    // we can write down this
    // s1.age=18;
    // s1.id=2;
    // s1.name=iso;
    // s1.nos=5;
    // but its need some work and time taken
    // we will use constructor

    // cout<<s1.age<<endl;  if no value asign in class properties then ctor gives a garbage value in output

    student s2(3, 16, "iso", 5, "viper");

    cout << s2.age << endl;
    cout << s2.name << endl;

    student s3(4, 19, "yuru", 5);

    cout << s3.name << endl;

    // alocating heap
    student *s4 = new student(2, 14, "sova", 8);
    cout << s4->name << endl;
    cout << (*s4).name << endl;

    delete s4; // no leak
}