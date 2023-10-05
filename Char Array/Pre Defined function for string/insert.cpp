#include <iostream>
using namespace std;
int main()
{
    string name;
    string midname;
    int index;

    cout << "Enter First words : ";
    getline(cin, name);
    cout << "Enter Second words : ";
    getline(cin, midname);
    cout << "Enter index for add new string :";
    cin >> index;

    cout << "Your ouput is : " << name << endl;

    name.insert(index, midname);

    cout << "After insert : " << name;

    return 0;
}