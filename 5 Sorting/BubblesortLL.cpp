#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getlen(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertathead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertattail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}

void sort1(Node *&head)
{

    int size = getlen(head);
    bool flag;

    if (head == NULL || head->next == NULL)
        return; // Empty or single element list is already sorted

    for (int i = 0; i < size; i++)
    {
        Node *curr = head;
        flag = true;
        while (curr->next != NULL)
        {
            if (curr->data > curr->next->data)
            {
                swap(curr->data, curr->next->data);
                flag = false;
            }
            curr = curr->next;
        }
        if (flag)
        {
            break;
        }
    }
}
void sort2(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return; // Empty or single element list is already sorted
    }

    bool flag;
    Node *curr;
    Node *pre = NULL;

    do
    {
        flag = false;
        curr = head;

        while (curr->next != pre)
        {
            if (curr->data > curr->next->data)
            {
                swap(curr->data, curr->next->data);
                flag = true;
            }
            curr = curr->next;
        }
        pre = curr;
    } while (flag);
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertattail(head, tail, 4);
    insertattail(head, tail, 2);
    insertattail(head, tail, 1);
    insertattail(head, tail, 3);

    printll(head);
    sort1(head);
    printll(head);
    sort2(head);
    printll(head);
}