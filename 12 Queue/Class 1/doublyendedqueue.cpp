#include <iostream>
#include <deque>
using namespace std;
int main()
{
    // creation
    deque<int> dq;

    // Push
    dq.push_back(10);
    cout << "Size is : " << dq.size() << endl;
    cout << "Front element is : " << dq.front() << endl;
    cout << "Back element is : " << dq.back() << endl;

    cout << endl;

    dq.push_front(20);
    cout << "Size is : " << dq.size() << endl;
    cout << "Front element is : " << dq.front() << endl;
    cout << "Back element is : " << dq.back() << endl;

    dq.push_front(30);
    cout << "Size is : " << dq.size() << endl;
    cout << "Front element is : " << dq.front() << endl;
    cout << "Back element is : " << dq.back() << endl;

    dq.push_front(40);
    cout << "Size is : " << dq.size() << endl;
    cout << "Front element is : " << dq.front() << endl;
    cout << "Back element is : " << dq.back() << endl;

    cout << endl;

    dq.push_back(80);
    cout << "Size is : " << dq.size() << endl;
    cout << "Front element is : " << dq.front() << endl;
    cout << "Back element is : " << dq.back() << endl;

    cout << endl;

    // Pop
    dq.pop_front();
    cout << "Size is : " << dq.size() << endl;
    cout << "Front element is : " << dq.front() << endl;
    cout << "Back element is : " << dq.back() << endl;

    cout << endl;

    dq.pop_back();
    cout << "Size is : " << dq.size() << endl;
    cout << "Front element is : " << dq.front() << endl;
    cout << "Back element is : " << dq.back() << endl;
}