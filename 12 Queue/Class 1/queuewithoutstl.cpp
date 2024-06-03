#include <iostream>
#include <vector>
using namespace std;

class queue
{
public:
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
        if (rear == size - 1)
        {
            cout << "Queue is in overflow ." << endl;
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
            cout << "Queue is in underflow ." << endl;
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
    queue q(5);
    cout << "Is queue is empty : " << q.isempty() << endl;

    // q.display();

    q.push(10);
    // q.display();

    q.push(20);
    // q.display();

    q.push(30);
    // q.display();

    q.push(40);
    // q.display();

    q.push(50);
    q.display();

    cout << "size of queue is : " << q.getsize() << endl;
    cout << "Front element of queue is : " << q.getfront() << endl;
    cout << "Rear element of queue is : " << q.getrear() << endl;

    q.pop();
    q.display();

    cout << "size of queue is : " << q.getsize() << endl;
    cout << "Is queue is empty : " << q.isempty() << endl;
}