#include <iostream>
using namespace std;
int main()
{
    string name;
    int index;
    cout << "Enter any words : ";
    getline(cin, name);
    cout << "Enter index number for particular position : ";
    cin >> index;

    cout << "Your ouput is : " << name << endl;

    cout << "Your index number " << index << " charector is :" << name.at(index);

    return 0;
}