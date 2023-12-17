#include <iostream>
using namespace std;
int solve(string &name1, string &name2, int i, int j)
{
    if (i >= name1.length())
    {
        return name2.length() - j;
    }
    if (j >= name2.length())
    {
        return name1.length() - i;
    }
    int ans = 0;
    if (name1[i] == name2[j])
    {
        ans = solve(name1, name2, i + 1, j + 1);
    }
    else
    {
        // insert
        int opt1 = 1 + solve(name1, name2, i, j + 1);
        // remove
        int opt2 = 1 + solve(name1, name2, i + 1, j);
        // replace
        int opt3 = 1 + solve(name1, name2, i + 1, j + 1);

        ans = min(opt1, min(opt2, opt3));
    }
    return ans;
}
int main()
{
    string name1;
    string name2;

    cout << "Enter your first word : ";
    getline(cin, name1);

    cout << "Enter your second word : ";
    getline(cin, name2);

    int i = 0, j = 0;

    int solution = solve(name1, name2, i, j);

    cout << "Minimum numbers required to convert name1 to name2 : " << solution;

    return 0;
}