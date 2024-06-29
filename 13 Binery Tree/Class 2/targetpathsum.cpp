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

bool pathsum(node *root, int targetsum, int sum)
{

    if (root == NULL)
    {
        return false;
    }
    sum += root->data;
    if (root->left == NULL && root->right == NULL)
    {
        if (sum == targetsum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int leftans = pathsum(root->left, targetsum, sum);
    int rightans = pathsum(root->right, targetsum, sum);

    return leftans || rightans;
}

int main()
{
    node *root = tree();
    int targetsum;
    int sum;
    cout << "Enter your sum targert : ";
    cin >> targetsum;

    if (pathsum(root, targetsum, 0))
    {
        cout << "Target found .";
    }
    else
    {
        cout << "Not found .";
    }

    return 0;
}