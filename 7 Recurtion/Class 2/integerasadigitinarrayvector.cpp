#include <iostream>
#include <vector>
using namespace std;
void printdigit(int num, vector<int> &ans)
{
    if (num == 0)
    {
        return;
    }
    int digit = num % 10;
    num = num / 10;
    printdigit(num, ans);
    ans.push_back(digit);
}
int main()
{
    int num;
    cout << "Enter your number :";
    cin >> num;
    vector<int> ans;
    printdigit(num, ans);
    for (int n : ans)
    {
        cout << n<<" .";
    }

    return 0;
}