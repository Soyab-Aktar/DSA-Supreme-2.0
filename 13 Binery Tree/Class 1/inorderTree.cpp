#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *createtree()
{
    cout << "Enter the value for the node : ";
    int data;
    cin >> data;

    // if user input =-1, no need to create node
    if (data == -1)
    {
        return NULL;
    }

    node *root = new node(data);
    // left node
    cout << "Left of Bnode :" << root->data << endl;
    root->left = createtree();
    // right node
    cout << "Right of node :" << root->data << endl;
    root->right = createtree();
}

void inorder(node *root)
{
    // Base case
    if (root == NULL)
    {
        return;
    }
    // L . N . R

    // L
    inorder(root->left);
    // N
    cout << root->data << " ";
    // R
    inorder(root->right);
}
int main()
{
    node *root = createtree();

    inorder(root);
}
