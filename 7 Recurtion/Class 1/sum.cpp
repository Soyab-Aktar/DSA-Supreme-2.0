#include <iostream>
using namespace std;
int sum(int n)
{
    // Base case
    if (n == 1)
    {
        return 1;
    }
    int ans = n + sum(n - 1);

    return ans;
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int finalans = sum(n);
    cout << "sum is : " << finalans;

    return 0;
}