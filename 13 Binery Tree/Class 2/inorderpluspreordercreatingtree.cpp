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
void preorder(node *root)
{
    // Base case
    if (root == NULL)
    {
        return;
    }
    // N . L . R

    // N
    cout << root->data << " ";
    // L
    preorder(root->left);
    // R
    preorder(root->right);
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
int searchinorder(int inorder[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (inorder[i] == target)
        {
            return i;
        }
    }
}

node *constructinandpreordertraversal(int inorder[], int preorder[], int size, int &preorderindex, int inorderstart, int inorderend)
{
    if (preorderindex >= size || inorderstart > inorderend)
    {
        return NULL;
    }

    int element = preorder[preorderindex];
    preorderindex++;
    node *newnode = new node(element);
    int position = searchinorder(inorder, size, element);

    newnode->left = constructinandpreordertraversal(inorder, preorder, size, preorderindex, inorderstart, position - 1);
    newnode->right = constructinandpreordertraversal(inorder, preorder, size, preorderindex, position + 1, inorderend);
}

int main()
{
    int inorder[] = {10, 8, 6, 2, 4, 12};
    int preorder[] = {2, 8, 10, 6, 4, 12};
    int size = 6;
    int preorderindex = 0;
    int inorderstart = 0;
    int inorderend = 5;

    node *root = constructinandpreordertraversal(inorder, preorder, size, preorderindex, inorderstart, inorderend);
    levelorder(root);
}