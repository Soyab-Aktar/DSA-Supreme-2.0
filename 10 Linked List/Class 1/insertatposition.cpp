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
void insertathead(node *&head, int newdata)
{
    if (head == NULL)
    {
        node *temp = new node(newdata);
        head = temp;
    }
    else
    {
        node *temp = new node(newdata);
        temp->next = head;
        head = temp;
    }
}

void insertatpos(node *&head, node *&tail, int pos, int newdata, int Length)
{
    if (pos > Length)
    {
        insert(head, tail, newdata);
    }
    if (pos == Length + 1)
    {
        insert(head, tail, newdata);
    }
    if (pos == 1)
    {
        insertathead(head, newdata);
    }
    else
    {
        node *temp = new node(newdata);
        node *previous = NULL;
        node *current = head;
        while (pos != 1)
        {
            pos--;
            previous = current;
            current = current->next;
        }
        temp->next = current;
        previous->next = temp;
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int data;
    cout << "How much data you need to store :";
    cin >> data;
    for (int i = 0; i < data; i++)
    {
        int userInput;
        cout << "Enter your element: ";
        cin >> userInput;
        insert(head, tail, userInput);
    }

    printll(head);
    int Length = getlen(head);

    int pos, newdata;
    cout << "Enter your position : ";
    cin >> pos;
    cout << "Enter your new data : ";
    cin >> newdata;

    insertatpos(head, tail, pos, newdata, Length);

    printll(head);
}