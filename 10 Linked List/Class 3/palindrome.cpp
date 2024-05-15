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

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *reverseUsingRecursion(node *prev, node *curr)
{
    // Base case: if current node is null, return previous node
    if (curr == nullptr)
    {
        return prev;
    }
    // Save the next node
    node *nextNode = curr->next;
    // Reverse the link
    curr->next = prev;
    // Move to the next nodes
    prev = curr;
    curr = nextNode;
    // Recurse
    return reverseUsingRecursion(prev, curr);
}

// Helper function to find the middle node of the linked list
node *middleNode(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast->next != nullptr)
    {
        fast = fast->next;
        if (fast->next != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

// Helper function to compare two linked lists
bool compareList(node *head1, node *head2)
{
    while (head2 != nullptr)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        else
        {
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    return true;
}

// Main function to check if the linked list is a palindrome
bool isPalindrome(node *head)
{
    // Break the list into two halves
    node *midNode = middleNode(head);
    node *head2 = midNode->next;
    midNode->next = nullptr;

    // Reverse the second half
    node *prev = nullptr;
    node *curr = head2;
    head2 = reverseUsingRecursion(prev, curr);

    // Compare both linked lists
    bool ans = compareList(head, head2);
    return ans;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    insert(head, tail, 10);
    insert(head, tail, 20);
    insert(head, tail, 5);
    insert(head, tail, 20);
    insert(head, tail, 10);

    print(head);

    if (isPalindrome(head))
    {
        cout << "It is a palindrome";
    }
    else
    {
        cout << "NOT a palindrome";
    }

    return 0;
}
