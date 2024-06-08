#include <iostream>
#include <queue>
using namespace std;

void rev(queue<int> &q)
{
    // Base case
    if (q.empty())
    {
        return;
    }
    // Processing
    int element = q.front();
    q.pop();
    rev(q);
    q.push(element);
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

    rev(q);
    cout << "Reverse queue : ";
    display(q);
}