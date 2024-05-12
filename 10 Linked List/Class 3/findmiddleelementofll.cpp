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
int getlen(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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

void basicMformid(node *&head, node *&tail)
{
    int length = getlen(head);
    int pos = length / 2 + 1;

    // Method 1---
    node *temp = head;
    while (pos != 1)
    {
        pos--;
        temp = temp->next;
    }

    // Method 2---
    //  int currpos=1;
    //  node *temp=head;
    //  while (currpos!=pos)
    //  {
    //      currpos++;
    //      temp=temp->next;
    //  }

    cout << "Middle element of Linked list : " << temp->data;
}

void tortoiseM(node *head, node *tail)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    cout << "Middle element of Linked list : " << slow->data;
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
    insertll(head, tail, 60);

    printll(head);

    basicMformid(head, tail);
    cout << endl;
    tortoiseM(head, tail);
}