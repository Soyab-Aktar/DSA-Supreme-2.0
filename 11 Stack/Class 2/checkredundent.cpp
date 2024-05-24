#include <iostream>
#include <stack>
using namespace std;
bool checkredundent(string name)
{
    stack<char> st;

    for (int i = 0; i < name.length(); i++)
    {
        char ch = name[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            bool hasOperator = false;
            while (!st.empty() && st.top() != '(')
            {
                if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                {
                    hasOperator = true;
                }
                st.pop();
            }
            st.pop(); // pop '('
            if (!hasOperator)
            {
                return true; // redundant bracket found
            }
        }
    }
    return false;
}

int main()
{
    string name = "((a+b)*(c+d))";

    if (checkredundent(name))
    {
        cout << "Redudant bracket present ." << endl;
    }
    else
    {
        cout << "Redudant bracket absent ." << endl;
    }
}