#include <iostream>
#include <limits.h>
using namespace std;
int maxcut(int length, int x, int y, int z)
{
    if (length == 0)
    {
        return 0;
    }
    if (length < 0)
    {
        return INT_MIN;
    }
    int option1 = 1 + maxcut(length - x, x, y, z);
    int option2 = 1 + maxcut(length - y, x, y, z);
    int option3 = 1 + maxcut(length - z, x, y, z);

    int finalAns = max(option1, max(option2, option3));

    return finalAns;
}
int main()
{
    int length;
    int x = 2, y = 1, z = 1;
    cout << "Enter your length :";
    cin >> length;
    int solve = maxcut(length, x, y, z);
    cout << "Maximum cut in segment : " << solve;

    return 0;
}