#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void rev(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {
        int firstelement = q.front();
        q.pop();
        s.push(firstelement);
    }
    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
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

    // cout << "Orginal queue : ";
    // display(q);
    // cout << endl;

    rev(q);

    cout << "Reverse queue : ";
    display(q);
}