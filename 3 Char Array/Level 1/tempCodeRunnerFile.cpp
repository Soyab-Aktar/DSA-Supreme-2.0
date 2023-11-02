#include <iostream>
using namespace std;
int main()
{
    // print char array
    char ch[100];
    // input
    cout << "Enter your Char Array : ";
    cin.getline(ch,100);  //using this you can also input space and tab also
    // output
    cout << "Your entered input is : ";
    cout << ch << endl;
    cout << endl;


    return 0;
}