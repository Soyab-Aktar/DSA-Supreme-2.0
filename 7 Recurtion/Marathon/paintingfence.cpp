#include <iostream>
#include <vector>
using namespace std;
int solve(int n, int k)
{
    if (n == 1)
    {
        return k;
    }
    if (n == 2)
    {
        return k + k * (k - 1);
    }

    int ans = (k - 1) * solve(n - 1, k) + solve(n - 2, k);

    return ans;
}
int main()
{
    int n;
    int k;
    cout << "Enter your fence : ";
    cin >> n;
    cout << "Enter your paint : ";
    cin >> k;
    int final = solve(n, k);
    cout << "Number of the ways of painting : " << final;

    return 0;
}