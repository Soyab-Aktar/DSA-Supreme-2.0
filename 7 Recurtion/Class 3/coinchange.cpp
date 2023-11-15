#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int coinarr(vector<int> &arr, int amount, int size)
{
    if (amount == 0)
    {
        return 0;
    }
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        int coin = arr[i];
        if (coin <= amount)
        {
            int recAns = coinarr(arr, amount - coin, size);
            if (recAns != INT_MAX)
            {
                mini = min(mini, 1 + recAns);
            }
        }
    }
    return mini;
}
int main()
{
    vector<int> arr{1, 2, 5};
    int size = arr.size();
    int amount;
    cout << "Enter your amount :";
    cin >> amount;
    int result = coinarr(arr, amount, size);
    if (result == INT_MAX)
    {
        cout << "Not possible to make change for the given amount." << endl;
    }
    else
    {
        cout << "Minimum number of coins needed: " << result << endl;
    }
    return 0;
}
