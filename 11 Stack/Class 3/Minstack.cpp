// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// Implement the MinStack class:

// MinStack() initializes the stack object.
// void push(int val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.
// You must implement a solution with O(1) time complexity for each function.
#include <iostream>
#include <vector>
using namespace std;
class minstack
{
public:
    vector<pair<int, int>> st; // creating a vector where in every each bolck store two int,one is for value and second is for min
    minstack()
    {
    }

    void push(int data)
    {
        if (st.empty())
        {
            // it mean i am inserting first element
            pair<int, int> p;
            p.first = data;
            p.second = data;
            st.push_back(p);
        }
        else
        {
            pair<int, int> p;
            p.first = data;
            int olddata = st.back().second;
            p.second = min(olddata, data);
            st.push_back(p);
        }
    }

    void pop()
    {
        st.pop_back();
    }

    int top()
    {
        pair<int, int> rightmostpair = st.back();
        return rightmostpair.first;
    }
    int getmin()
    {
        pair<int, int> rightmostpair = st.back();
        return rightmostpair.second;
    }
};
int main()
{
    minstack minst;
    minst.push(4);
    minst.push(1);
    minst.push(2);
    minst.push(3);

    cout << "Top element of stack is : " << minst.top() << endl;
    cout << "Min element of stack is : " << minst.getmin() << endl;
}