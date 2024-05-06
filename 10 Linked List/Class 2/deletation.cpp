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
        tail = temp;
    }
}

void deletion(node *&head, node *&tail, int pos)
{
    int Length = getlen(head);
    if (pos == 1)
    {
        node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else if (pos == Length + 1)
    {
        node *prevnode = head;
        while (prevnode->next == tail)
        {
            prevnode = prevnode->next;
        }
        prevnode->next = NULL;
        delete tail;
        tail = prevnode;
    }
    else
    {
        node *pren = NULL;
        node *currn = head;
        while (pos != 1)
        {
            pos--;
            pren = currn;
            currn = currn->next;
        }
        pren->next = currn->next;
        currn->next = NULL;
        delete currn;
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

    cout << "Original Linked List: ";
    printll(head);

    int pos = 4;
    deletion(head, tail, pos);

    cout << "Linked List after deletion at position " << pos << ": ";
    printll(head);

    return 0;
}
