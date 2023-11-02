#include <iostream>
using namespace std;
void removech(string name)
{
    // size of string
    cout << "Size of String is : " << name.size() << endl;

    cout << "After removing letters is : ";

    for (int i = 1; i < name.size() - 1; i++)
    {
        cout << name[i];
    }
}
int main()
{
    string name;
    cout << "Enter your text : ";
    getline(cin, name);

    cout << "Your input is : " << name << endl;

    removech(name);
}