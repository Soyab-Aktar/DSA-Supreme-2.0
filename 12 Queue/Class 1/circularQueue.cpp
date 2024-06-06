#include <iostream>
using namespace std;
class cqueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    cqueue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        // full queue
        if (rear == size - 1 && front == 0)
        {
            cout << "Queue overloaded . " << endl;
        }
        // empty queue
        else if (front == -1 && rear == -1)
        {
            rear++;
            front++;
            arr[rear] = data;
        }
        // circular condition
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        // normal case
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        // single queue
        if (front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        // empty case
        else if (front == -1 && rear == -1)
        {
            cout << "Queue underflow ." << endl;
        }
        // circular case
        else if (front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        // normal clase
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
            return true;
        }
        else
        {
            return false;
        }
        cout << endl;
    }
    bool isfull()
    {
        if (front == 0 && rear == size - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
        cout << endl;
    }

    int getsize()
    {
        if (front == -1 && rear == -1)
        {
            return 0;
        }
        else
        {
            return rear - front + 1;
        }
    }

    int getfront()
    {
        if (front == -1)
        {
            cout << "No element in queue ." << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    int getrear()
    {
        if (front == -1)
        {
            cout << "No element in queue ." << endl;
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    cqueue q(3);
    q.display();

    q.push(1);
    q.push(2);
    q.push(3);
    q.display();

    q.pop();
    q.pop();
    q.pop();
    q.display();

    q.push(5);
    q.display();
}
