#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &st, int element)
{
    if (st.empty() || element > st.top())
    {
        st.push(element);
        return;
    }

    // Remove the top element
    int temp = st.top();
    st.pop();

    // Insert the element in the sorted stack
    insert(st, element);

    // Push the removed element back
    st.push(temp);
}

void sortstack(stack<int> &st)
{
    // Base Case: If stack is empty
    if (st.empty())
    {
        return;
    }

    // Remove the top element
    int temp = st.top();
    st.pop();

    // Recursively sort the remaining stack
    sortstack(st);

    // Insert the removed element back in the sorted stack
    insert(st, temp);
}

void display(stack<int> st) // Passed by value to keep the original stack intact
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
    st.push(7);
    st.push(9);
    st.push(2);
    st.push(12);

    cout << "Original stack: ";
    display(st);
    cout << endl;

    // Sort the stack
    sortstack(st);

    cout << "Sorted stack: ";
    display(st);
    cout << endl;
}
