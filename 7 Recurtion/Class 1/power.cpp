#include <iostream>
using namespace std;
int power(int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }
    int ans = 2 * power(n - 1);

    return ans;
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int finalans = power(n);
    cout << "Power of this number is : " << finalans;

    return 0;
}