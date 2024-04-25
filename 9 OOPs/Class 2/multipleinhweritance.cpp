#include <iostream>
using namespace std;
class teacher
{
public:
    void teach()
    {
        cout << "Teaching..." << endl;
    }
};
class researcher
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
}