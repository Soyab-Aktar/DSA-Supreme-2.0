#include <iostream>
#include <vector>
using namespace std;
int solve(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    int ans = (n - 1) * (solve(n - 1) + solve(n - 2));
    return ans;
}
int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    int final = solve(n);
    cout << "Number of dearrangement is : " << final;

    return 0;
}