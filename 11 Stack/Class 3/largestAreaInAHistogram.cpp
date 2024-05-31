// Given an array of integers heights representing the histogram's
//  bar height where the width of each bar is 1,
//  return the area of the largest rectangle in the histogram.

// Input: heights = [2,1,5,6,2,3]
// Output: 10
// Explanation: The above is a histogram where width of each bar is 1.
// The largest rectangle is shown in the red area, which has an area = 10 units.

// Input: heights = [2,4]
// Output: 4
#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>
using namespace std;

vector<int> nextSmaller(vector<int> arr)
{
    stack<int> st;
    vector<int> ans;
    st.push(-1);
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans.push_back(st.top());
        st.push(i);
    }
    return ans;
}

vector<int> preSmaller(vector<int> arr)
{
    stack<int> st;
    vector<int> ans;
    st.push(-1);
    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans.push_back(st.top());
        st.push(i);
    }
    return ans;
}

int largestrectanglearea(vector<int> &height)
{
    vector<int> next = nextSmaller(height);
    for (int i = 0; i < height.size(); i++)
    {
        if (next[i] == -1)
        {
            next[i] = height.size();
        }
    }
    vector<int> pre = preSmaller(height);

    vector<int> area(next.size());
    for (int i = 0; i < next.size(); i++)
    {
        int width = next[i] - pre[i] - 1;
        int length = height[i];
        int currArea = width * length;
        area[i] = currArea;
    }

    int maxi = INT_MIN;
    for (int i = 0; i < area.size(); i++)
    {
        maxi = max(maxi, area[i]);
    }
    return maxi;
}

int main()
{
    vector<int> height{2, 1, 5, 6, 2, 3};
    int finalans = largestrectanglearea(height);

    cout << "Largets area in a histogram : " << finalans;

    return 0;
}