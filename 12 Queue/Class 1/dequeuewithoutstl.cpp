#include <iostream>
using namespace std;
class dequeue
{

public:
    int *arr;
    int size;
    int front;
    int back;

    dequeue(int size)
    {
        arr = new int(size);
        this->size = size;
        front = -1;
        back = -1;
    }

    void push_back(int data)
    {
        if ((back == size - 1) || (back == front - 1))
        {
            cout << "Overflow . " << endl;
        }
        else if (front == -1 && back == -1)
        {
            front++;
            back++;
            arr[back] = data;
        }
        else if (back == size - 1 && front != 0)
        {
            back = 0;
            arr[back] = data;
        }
        else
        {
            back++;
            arr[back] = data;
        }
    }

    void push_front(int data)
    {
        if ((back == size - 1) || (back == front - 1))
        {
            cout << "Overflow . " << endl;
        }
        else if (front == -1 && back == -1)
        {
            front++;
            back++;
            arr[front] = data;
        }
        else if (front == 0 && back != size - 1)
        {
            front = size - 1;
            arr[front] = data;
        }
        else
        {
            front--;
            arr[front] = data;
        }
    }

    void pop_front()
    {
        if (front == -1 && back == -1)
        {
            cout << "Underflow ." << endl;
        }
        else if (front == back)
        {
            arr[front] = -1;
            front - 1;
            back - 1;
        }
        else if (front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    void pop_back()
    {
        if (front == -1 && back == -1)
        {
            cout << "Underflow ." << endl;
        }
        else if (front == back)
        {
            arr[back] = -1;
            front - 1;
            back - 1;
        }
        else if (back == 0)
        {
            arr[back] = -1;
            back = size - 1;
        }
        else
        {
            arr[back] = -1;
            back++;
        }
    }

    bool isempty()
    {
        if (front == -1 && back == -1)
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
        if (front == 0 && back == size - 1)
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
        if (front == -1 && back == -1)
        {
            return 0;
        }
        else
        {
            return back - front + 1;
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
            return arr[back];
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
    dequeue dq(3);

    dq.display();

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.display();

    dq.pop_back();
    dq.display();
}