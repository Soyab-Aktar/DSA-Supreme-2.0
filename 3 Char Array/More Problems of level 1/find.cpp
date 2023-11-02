#include <iostream>
using namespace std;

string findch(string name, string target)
{
    string ans = "";

    for (int i = 0; i < name.length(); i++)
    {
        for (int j = 0; j < target.length(); j++)
        {
            if (name[i] == target[j])
            {
                ans.push_back(target[j]);

                if (ans == target)
                {
                    break; // Stop when we have found the full target
                }
            }
        }
    }

    return ans;
}

int main()
{
    string name;
    cout << "Enter a sentence : ";
    getline(cin, name);

    string target;
    cout << "Enter your target: ";
    getline(cin, target);

    string find = findch(name, target);

    if (find == target)
    {
        cout << "Found";
    }
    else if (find.empty())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Partially found";
    }

    return 0;
}
