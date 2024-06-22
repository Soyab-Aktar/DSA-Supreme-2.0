#include <iostream>
#include <queue>
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

void levelorder(node *root)
{
    // Step 1 -> Create queue
    queue<node *> q;

    // Step 2 -> push root
    q.push(root);

    while (!q.empty())
    {
        // Step a
        node *front = q.front();
        q.pop();

        cout << front->data << " ";

        // Step b
        if (front->left != NULL)
        {
            q.push(front->left);
        }
        if (front->right != NULL)
        {
            q.push(front->right);
        }
    }
}

int main()
{
    node *root = createTree();

    cout << "Level Order : ";
    levelorder(root);
}