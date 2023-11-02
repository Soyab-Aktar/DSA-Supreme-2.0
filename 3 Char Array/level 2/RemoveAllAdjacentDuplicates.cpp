#include <iostream>
using namespace std;
void removeAdjacent(string name)
{
    string ans = "";
    int index = 0;

    while (index < name.size())
    {
        if (ans.length() > 0 && ans[ans.length() - 1] == name[index])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(name[index]);
        }

        index++;
    }

    cout << "After adjacent string is : " << ans;
}
int main()
{
    string name;
    cout << "Enter some Letters :";
    getline(cin, name);

    removeAdjacent(name);

    return 0;
}