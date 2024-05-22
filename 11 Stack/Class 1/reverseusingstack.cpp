#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

int main()
{
    string name = "Soyab";

    stack<char> st;

    for (int i = 0; i < name.length(); i++)
    {
        char ch = name[i];
        st.push(ch);
    }

    cout << endl;

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}