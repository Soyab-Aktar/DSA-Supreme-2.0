#include <iostream>
using namespace std;
class stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "Stack in overflow" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "Stack in overflow" << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack in underflow" << endl;
        }
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout << "Stack in underflow" << endl;
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }

    void display()
    {
        cout << "Top1 : " << top1 << endl;
        cout << "Top2 : " << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    ~stack()
    {
        delete[] arr; // Clean up the allocated memory
    }
};

int main()
{
    stack st(6);

    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push2(99);
    st.push2(88);
    st.push1(55);
    st.push1(30);

    st.display();
}