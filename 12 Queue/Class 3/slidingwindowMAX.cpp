#include <iostream>
#include <deque>
#include <vector>
using namespace std;

vector<int> find(vector<int> &num, int k)
{
    vector<int> ans;
    deque<int> dq;

    // First window process
    for (int i = 0; i < k; i++)
    {
        int element = num[i];
        while (!dq.empty() && element > num[dq.back()])
        {
            dq.pop_back();
        }

        // insert
        dq.push_back(i);
    }

    for (int i = k; i < num.size(); i++)
    {
        // ans store
        ans.push_back(num[dq.front()]);

        // removal
        // out of range
        if (!dq.empty() && i - dq.front() >= k)
        {
            dq.pop_front(); // Corrected to pop from front
        }

        // pop small elements
        int element = num[i];
        while (!dq.empty() && element > num[dq.back()])
        {
            dq.pop_back();
        }

        // add
        dq.push_back(i);
    }

    // Last window
    ans.push_back(num[dq.front()]);
    return ans;
}

int main()
{
    vector<int> num = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = find(num, k);
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
