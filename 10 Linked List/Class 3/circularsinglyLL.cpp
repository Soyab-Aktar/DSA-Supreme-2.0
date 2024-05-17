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

void insert(node *&last, int data)
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

    insert(last, 1);
    insert(last, 2);
    insert(last, 3);
    insert(last, 4);

    print(last);

    // Additional print statements to show the circular nature
    if (last != NULL)
    {
        cout << "Last node data: " << last->data << endl;
        cout << "Next node after last: " << last->next->data << endl; // Should be the first node's data
    }
}