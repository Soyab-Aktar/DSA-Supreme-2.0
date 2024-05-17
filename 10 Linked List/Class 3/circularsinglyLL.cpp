#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node()
    {
        this->next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtBeginning(node *&last, int data)
{
    node *temp = new node(data);

    if (last == NULL)
    {
        last = temp;       // If the list is empty, make the new node the last node
        last->next = last; // Point to itself
    }
    else
    {
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void print(node *last)
{
    if (last == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    node *temp = last->next;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != last->next); // Use a do-while loop to ensure at least one iteration
    cout << endl;
}

int main()
{
    node *last = NULL;

    insertAtBeginning(last, 10);
    insertAtBeginning(last, 20);
    insertAtBeginning(last, 30);
    insertAtBeginning(last, 40);
    insertAtBeginning(last, 50);

    print(last);
}