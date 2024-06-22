// Given the root of a binary tree, return its maximum depth.
// A binary tree's maximum depth is the number of nodes along
// the longest path from the root node down to the farthest leaf node.
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

// Its return root node of  the created tree
node *createTree()
{
    cout << "Enter the value for the node : ";
    int data;
    cin >> data;

    // if user input =-1, no need to create node
    if (data == -1)
    {
        return NULL;
    }

    // step 1 = Create node
    node *root = new node(data);
    // step 2 = create left subtree
    cout << "Left of Bnode :" << root->data << endl;
    root->left = createTree();
    // step 3 = create right subtree
    cout << "Right of node :" << root->data << endl;
    root->right = createTree();

    return root;
}

int maxheight(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lefttree = maxheight(root->left);
    int righttree = maxheight(root->right);
    int height = max(lefttree, righttree);

    return height + 1;
}

int main()
{
    node *root = createTree();

    cout << "Max height is : " << maxheight(root);
}