#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &st, int pos, int &ans)
{
    // Base Case
    if (pos == 1)
    {
        ans = st.top();
        return;
    }
    // processing
    pos--;
    int temp = st.top();
    st.pop();

    solve(st, pos, ans);
    st.push(temp);
}

int middleelement(stack<int> &st)
{
    int size = st.size();
    if (st.empty())
    {
        cout << "Stack is empty . " << endl;
        return -1;
    }
    else
    {
        int pos = 0;
        // odd
        if (size % 2 != 0)
        {
            pos = size / 2 + 1;
        }
        else
        {
            pos = size / 2;
        }
        int ans = -1;
        solve(st, pos, ans);
        return ans;
    }
}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int mid = middleelement(st);

    cout << mid;
}