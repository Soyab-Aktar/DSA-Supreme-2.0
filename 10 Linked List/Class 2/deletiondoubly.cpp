#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node()
    {
        this->next = NULL;
        this->prev = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void printll(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getlen(node *head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void deletion(node *&head, node *&tail, int pos)
{
    int Length = getlen(head);

    if (pos == 1) // deletation from head
    {

        node *temp = head;
        head = temp->next;
        head->prev = NULL;
        delete temp;
    }
    else if (pos == Length)
    {
        node *preNode = tail->prev;
        node *temp = tail;
        preNode->next = NULL;
        temp->prev = NULL;
        delete temp;
        tail = preNode;
    }
    else // Deletion from middle
    {
        node *current = head;
        for (int i = 1; i < pos; ++i)
            current = current->next;

        node *prevNode = current->prev;
        node *nextNode = current->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;

        current->next = NULL;
        current->prev = NULL;

        delete current;
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    insert(head, tail, 10);
    insert(head, tail, 20);
    insert(head, tail, 30);
    insert(head, tail, 40);
    insert(head, tail, 50);

    printll(head);

    deletion(head, tail, 3);
    printll(head);

    return 0;
}
