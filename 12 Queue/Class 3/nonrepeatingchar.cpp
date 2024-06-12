#include <iostream>
#include <queue>
using namespace std;
int main()
{
    string str = "ababc";
    queue<char> q;

    int freq[26] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        freq[ch - 'a']++;
        q.push(ch);

        while (!q.empty())
        {
            char fchar = q.front();
            if (freq[fchar - 'a'] > 1)
            {
                q.pop();
            }
            else
            {
                cout << fchar << " ";
                break;
            }
            if (q.empty())
            {
                cout << "#" << " ";
            }
        }
    }

    return 0;
}