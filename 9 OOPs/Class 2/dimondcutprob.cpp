#include <iostream>
using namespace std;
class person
{
public:
    void walk()
    {
        cout << "Walking ..." << endl;
    }
};
class teacher : virtual public person
{
public:
    void teach()
    {
        cout << "Teaching..." << endl;
    }
};
class researcher : virtual public person
{
public:
    void research()
    {
        cout << "Researching..." << endl;
    }
};

class professor : public teacher, public researcher
{
public:
    void college()
    {
        cout << "Found in college.." << endl;
    }
};
int main()
{
    professor p1;
    p1.research();
    p1.college();
    p1.teach();
    // 1st method - scope resulation
    // p1.teacher::walk();

    // 2nd method - vertual (check class declare)
    p1.walk();
}