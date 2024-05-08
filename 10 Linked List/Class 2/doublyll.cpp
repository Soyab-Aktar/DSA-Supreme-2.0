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
void insertathead(node *&head, int data)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
    }
    else
    {
        node *temp = new node(data);
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
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

void insertatmid(node *&head, node *&tail, int pos, int data)
{
    int Length = getlen(head);
    node *prevNode = NULL;
    node *currNode = head;
    node *temp = new node(data);
    while (pos != 1)
    {
        pos--;
        prevNode = currNode;
        currNode = currNode->next;
    }
    prevNode->next = temp;
    temp->prev = prevNode;
    temp->next = currNode;
    currNode->prev = temp;
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

    insertatmid(head, tail, 3, 99);

    printll(head);

    return 0;
}
