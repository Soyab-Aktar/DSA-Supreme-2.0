#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void rev(queue<int> &q, int k)
{
    stack<int> s;

    // Push first element from Q to S
    for (int i = 0; i < k; i++)
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
    }

    // Push all k element from S to Q
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    // Last step
    for (int i = 0; i < q.size() - k; i++)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
}

void display(queue<int> &q)
{
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        cout << element << " ";
    }
}

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int k = 3;

    rev(q, k);
    cout << "Reverse queue : ";
    display(q);
}