#include <iostream>
#include <stack>
using namespace std;

void insertbottom(stack<int> &st, int element)
{
    // Base Case
    if (st.empty())
    {
        st.push(element);
        return;
    }

    // Processing
    int temp = st.top();
    st.pop();

    // recursion process
    insertbottom(st, element);

    // Backtracking
    st.push(temp);
}

void reverse(stack<int> &st)
{
    // Base Case
    if (st.empty())
    {
        return;
    }
    // Processing
    int temp = st.top();
    st.pop();
    // recursion
    reverse(st);
    // Backtracking
    insertbottom(st, temp);
}

void display(stack<int> st) // Set it in pass by value
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Original stack: ";
    display(st);
    cout << endl;

    reverse(st);
    cout << "Reverse stack: ";
    display(st);

    return 0;
}