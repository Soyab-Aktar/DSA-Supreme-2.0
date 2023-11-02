#include <iostream>
using namespace std;
int fibb(int n)
{
    // Base case
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int ans = fibb(n - 1) + fibb(n - 2);

    return ans;
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int finalans = fibb(n);
    cout << "sum of fibonacci series sum  : " << finalans;

    return 0;
}