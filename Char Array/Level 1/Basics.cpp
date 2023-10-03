#include <iostream>
using namespace std;
int main()
{
    // print char array
    char ch[10];
    // input
    cout << "Enter your Char Array : ";
    cin >> ch;
    // output
    cout << "Your entered input is : ";
    cout << ch << endl;
    cout << endl;

    // printing char in diff line
    for (int i = 0; i < 10; i++)
    {
        cout << "Index number " << i << " :" << ch[i] << endl;  //nun char is at index 5
    }
    // Convet char into int

    int n;
    cout << "Enter your Number from 0-10 :";
    cin >> n;
    char temp = ch[n];
    int value = (int)temp;
    cout << "Ascell value of index number " << n << ": " << value;

    return 0;
}