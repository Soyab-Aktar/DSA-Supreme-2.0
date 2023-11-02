#include <iostream>
using namespace std;
void removech(string name, string part)
{
    while (name.find(part) != string ::npos)
    {
        name.erase(name.find(part), part.length());
    }

    cout << "After remove : " << name;
}
int main()
{
    string name;
    string part;

    cout << "Enter you text :";
    getline(cin, name);

    cout << "Enter your part text :";
    getline(cin, part);

    removech(name, part);

    return 0;
}