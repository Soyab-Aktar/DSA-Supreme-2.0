#include <iostream>
using namespace std;
int main()
{
    string name;
    int index;
    int till;
    cout << "Enter any words : ";
    getline(cin, name);

    cout << "Enter your index where you want to start remove :";
    cin >> index;
    cout << "Enter how much you want to erase Charector :";
    cin >> till;

    cout << "Your ouput is : " << name << endl;

    name.erase(index, till);
    cout << "After erase parts : " << name;

    return 0;
}