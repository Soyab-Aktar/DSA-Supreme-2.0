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
void leftboundary(node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    cout << root->data << " ";
    if (root->left != NULL)
    {
        leftboundary(root->left);
    }
    else
    {
        leftboundary(root->right);
    }
}
void rightboundary(node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    if (root->right != NULL)
    {
        leftboundary(root->right);
    }
    else
    {
        leftboundary(root->left);
    }
    cout << root->data << " ";
}
void leafboundary(node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
    }
    leafboundary(root->left);
    leafboundary(root->right);
}
void boundarytraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    leftboundary(root->left);
    leafboundary(root);
    rightboundary(root->right);
}
int main()
{
    node *root = tree();

    boundarytraversal(root);

    return 0;
}