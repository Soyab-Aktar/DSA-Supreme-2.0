#include <iostream>
#include <vector>
using namespace std;

class queue
{
    int *arr;
    int size;
    int front;
    int rear;

    queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    void push(int data)
    {
        // check full
        if (rear = size - 1)
        {
            cout << "Queue is in overflow .";
            return;
        }
        else if (front == -1 && rear == -1)
        {
            // empty condition
            front++;
            rear++;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        // single element condition
        if (front == rear)
        {
            arr[front] = -1;
            front == -1;
            rear == -1;
        }
        else if (front == -1 && rear == -1)
        {
            cout << "Queue is in underflow .";
            return;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    bool isempty()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is empty .";
        }
        else
        {
            cout << "Queue is non empty .";
        }
        cout << endl;
    }
};