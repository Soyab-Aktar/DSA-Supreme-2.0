#include <iostream>
using namespace std;
void insertch(string name, string name1)
{
    int num;
    cout << "Enter your index number where you want to insert : ";
    cin >> num;

    if (name.size() < num)
    {
        name += name1;
    }

    else
    {
        name.insert(num, name1);
    }

    cout << "Your modified text is : " << name;
}
int main()
{
    string name;
    string name1;
    cout << "Enter any text : ";
    getline(cin, name);

    cout << "Your insert text is : " << name << endl;

    cout << "Enter you text for insert :";
    getline(cin, name1);

    cout << endl;

    insertch(name, name1);

    return 0;
}