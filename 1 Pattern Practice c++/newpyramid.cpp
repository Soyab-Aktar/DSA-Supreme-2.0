#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "#";
        }
        for(int k = i-1; k >= 1;k- )
        {
            cout<<"0";
        }
        cout << endl;
    }
}