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

// Its return root node of the created tree
node *createTree()
{
    cout << "Enter the value for the node : ";
    int data;
    cin >> data;

    // if user input = -1, no need to create node
    if (data == -1)
    {
        return NULL;
    }

    // step 1 = Create node
    node *root = new node(data);
    // step 2 = create left subtree
    cout << "Left of node :" << root->data << endl;
    root->left = createTree();
    // step 3 = create right subtree
    cout << "Right of node :" << root->data << endl;
    root->right = createTree();

    return root;
}

void levelorder(node *root)
{
    if (root == NULL)
        return;

    // Step 1 -> Create queue
    queue<node *> q;

    // Step 2 -> push root
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // Step a
        node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // Step b
            cout << front->data << " ";
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
}

int main()
{
    node *root = createTree();

    cout << "Level Order : " << endl;
    levelorder(root);

    return 0;
}
