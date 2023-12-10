#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &arr, int size, int i)
{
    if (i >= size)
    {
        return 0;
    }
    int opt1 = arr[i] + solve(arr, size, i + 2);
    int opt2 = arr[i] + solve(arr, size, i + 1);
    int finalans = max(opt1, opt2);
    return finalans;
}
int main()
{
    vector<int> arr{2, 4, 1, 6, 8, 5, 9};
    int size = arr.size();
    int i = 0;
    int ans = solve(arr, size, i);
    cout << "Maximunm sum of non adjacent element is : " << ans;
    return 0;
}