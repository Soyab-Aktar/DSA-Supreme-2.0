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

void insert(node *&head, node *&tail, int data)
{
    if (tail == NULL)
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

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int startelementloop(node *&head)
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
        if (fast == slow)
        {
            break;
        }
    }

    slow = head;
    while (fast != slow)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow->data;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    insert(head, tail, 1);
    insert(head, tail, 2);
    insert(head, tail, 3);
    insert(head, tail, 4);
    insert(head, tail, 5);
    tail->next = head->next->next;

    cout << "Starting element of this looped linked list is - " << startelementloop(head);
    return 0;
}