#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // creating
    queue<int> q;

    // insert elements
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // getting size
    cout << "Size of queue : " << q.size() << endl;

    // remove element
    q.pop();

    // getting size
    cout << "Size of queue : " << q.size() << endl;

    // Check empty
    if (q.empty())
    {
        cout << "Queue is empty .";
    }
    else
    {
        cout << "Queue is not empty .";
    }
}