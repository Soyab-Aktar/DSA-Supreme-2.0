#include <iostream>
#include <map>
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

bool findloop(node *last)
{
    if (last == NULL) // Edge case: if the list is empty
        return false;

    map<node *, bool> table;
    node *temp = last->next;
    while (temp != NULL)
    {
        if (table[temp] == true) // If the node is already in the table
        {
            return true;
        }
        table[temp] = true; // Mark the node as visited
        temp = temp->next;

        if (temp == last->next) // If we have looped back to the start, exit the loop
            break;
    }
    return false;
}

int main()
{
    node *last = NULL;

    insert(last, 1);
    insert(last, 2);
    insert(last, 3);
    insert(last, 4);

    print(last);

    if (findloop(last))
    {
        cout << "Loop found in the list." << endl;
    }
    else
    {
        cout << "No loop in the list." << endl;
    }

    return 0;
}