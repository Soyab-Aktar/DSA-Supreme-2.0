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
int printll(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert(node *&head, int data)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }
}
void insertll(node *&head, node *&tail, int data)
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
        temp->next = NULL;
        tail = temp;
    }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    insertll(head, tail, 10);
    insertll(head, tail, 20);
    insertll(head, tail, 30);
    insertll(head, tail, 40);
    insertll(head, tail, 50);

    printll(head);
}