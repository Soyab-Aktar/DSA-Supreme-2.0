#include <iostream>
using namespace std;
int counting(int num)
{
    if (num == 0)
    {
        return 1;
    }
    if (num == 1)
    {
        return 1;
    }

    int ans = counting(num - 1) + counting(num - 2);
    return ans;
}
int main()
{
    int num;
    cout << "How many stars have : ";
    cin >> num;

    int finalAns = counting(num);

    cout << "Distinct way to climb to the top is : " << finalAns;

    return 0;
}