#include <iostream>
using namespace std;

class stacks
{
public:
    int *arr;
    int size;
    int top;

    stacks(int size)
    {
        arr = new int(size);
        this->size = size;
        this->top = -1;
    }

    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack is in overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is in underflow" << endl;
        }
        else
        {
            top--;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
    int gettop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    int getsize()
    {
        return top + 1;
    }

    void print()
    {
        cout << "Top : " << top << endl;
        cout << "Top Element : " << gettop() << endl;
        cout << "Stack : ";
        for (int i = 0; i < getsize(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl
             << endl;
    }
};

int main()
{
    stacks st(8);

    st.push(10);
    st.print();

    st.push(20);
    st.print();

    cout << "Size of Stack : " << st.getsize();
    cout << endl
         << endl;

    st.pop();
    cout << "Size of Stack : " << st.getsize() << endl;
    st.print();
}