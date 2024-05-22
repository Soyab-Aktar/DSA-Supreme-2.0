#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st; // creation of stack

    // input
    st.push(10);
    st.push(20);
    st.push(30);

    // size
    cout << "Size of stack is : " << st.size() << endl;

    // remove
    st.pop();

    // stack empty or not
    if (st.empty())
    {
        cout << "Stact is empty.";
    }
    else
    {
        cout << "Stack is not empty";
    }

    // check top element

    cout << "Top element of stack is :" << st.top() << endl;
}