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

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lefttree = height(root->left);
    int righttree = height(root->right);
    int height = max(lefttree, righttree) + 1;

    return height;
}

int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int opt1 = diameter(root->left);
    int opt2 = diameter(root->right);
    int opt3 = height(root->left) + height(root->right);

    int finaldiameter = max(opt1, max(opt2, opt3));

    return finaldiameter;
}

int main()
{
    node *root = createTree();

    cout << "Diameter of tree : " << diameter(root);
}