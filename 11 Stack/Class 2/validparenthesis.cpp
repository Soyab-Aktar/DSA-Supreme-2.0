// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
#include <iostream>
#include <stack>
using namespace std;
bool isvalid(string name)
{
    stack<char> st;
    for (int i = 0; i < name.length(); i++)
    {
        char ch = name[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            // for open bracket just push
            st.push(ch);
        }
        else
        {
            // closing bracket
            if (!st.empty())
            {
                if (ch == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else if (ch == '}' && st.top() == '{')
                {
                    st.pop();
                }
                else if (ch == ']' && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    // Check if any remaining brackets left in stack after iterating through the string
    return st.empty();
}

int main()
{
    string name = "{()}";
    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i] << " ";
    }
    cout << endl;
    if (name.length() == 0)
    {
        cout << "Invalid parenthesis ,String is empty.";
    }
    else
    {
        if (isvalid(name))
        {
            cout << "Valid parenthesis .";
        }
        else
        {
            cout << "Invalid parenthesis .";
        }
    }
}