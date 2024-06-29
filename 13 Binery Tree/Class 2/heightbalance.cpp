// height-balance = A height-balanced binary tree is a
// binary tree in which the depth of the
// two subtrees of every node never differs by more than one.

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

node *tree()
{
    int data;
    cout << "Enter your data : ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    else
    {
        node *root = new node(data);
        cout << "Root data is : " << root->data << endl;
        cout << root->data << " left -> " << endl;
        root->left = tree();
        cout << root->data << " right -> " << endl;
        root->right = tree();
        return root;
    }
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lefth = height(root->left);
    int righth = height(root->right);
    int height = max(lefth, righth) + 1;

    return height;
}

bool isbalance(node *root)
{
    if (root == NULL)
    {
        return true;
    }

    int leftheight = height(root->left);
    int rightheight = height(root->right);
    int diff = abs(leftheight - rightheight);

    bool currnode = (diff <= 1);

    bool leftans = isbalance(root->left);
    bool rightans = isbalance(root->right);

    if (currnode && leftans && rightans)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    node *root = tree();

    if (isbalance(root))
    {
        cout << "Binery tree are balanced .";
    }
    else
    {
        cout << "Not balanced .";
    }
}