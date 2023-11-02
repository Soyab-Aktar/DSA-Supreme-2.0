#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string name1;
    cout << "Enter First words : ";
    getline(cin, name1);

    cout << "Your ouput is : " << name1 << endl;
    name1.pop_back();
    cout << "After push : " << name1;

    return 0;
}