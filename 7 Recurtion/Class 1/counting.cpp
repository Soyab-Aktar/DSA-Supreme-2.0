#include <iostream>
using namespace std;
int count(int n)
{
    // Base case
    if (n == 1)
    {
        cout << 1;
        return 1;
    }
    cout << n << " ";
    count(n - 1);
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    count(n);

    return 0;
}