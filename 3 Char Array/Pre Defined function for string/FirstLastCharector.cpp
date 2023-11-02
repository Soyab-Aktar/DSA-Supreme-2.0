#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter any words : ";
    getline(cin, name);

    cout << "Your ouput is : " << name << endl;
    cout << "First letter of word :" << name.front() << endl;
    cout << "Last letter of word :" << name.back();

    return 0;
}