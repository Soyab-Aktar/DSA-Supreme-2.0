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

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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
        temp->next = NULL;
        tail = temp;
    }
}

void reverse(node *&head)
{
    node *pre = NULL;
    node *curr = head;
    while (curr != NULL)
    {
        node *temp = curr->next;
        curr->next = pre;
        pre = curr;
        curr = temp;
    }
    head = pre;
}
void addone(node *&head)
{
    
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    insert(head, tail, 1);
    insert(head, tail, 5);
    insert(head, tail, 7);

    display(head);

    reverse(head);
    display(head);
}