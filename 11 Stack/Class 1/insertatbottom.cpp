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

    int element;
    cout << "Enter the element you want to insert at the bottom: ";
    cin >> element;

    insertbottom(st, element);

    cout << "Stack after insertion: ";
    display(st);

    return 0;
}