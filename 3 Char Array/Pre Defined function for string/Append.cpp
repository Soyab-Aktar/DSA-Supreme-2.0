#include <iostream>
using namespace std;
int main()
{
    string name1;
    string name2;
    cout << "Enter Name1 words : ";
    getline(cin, name1);
    cout << "Enter Name2 words : ";
    getline(cin, name2);

    cout << "Your ouput is : " << name1 << endl;
    cout << "Your ouput is : " << name2 << endl;

    name1.append(name2);

    cout << "After Append : " << name1;

    return 0;
}