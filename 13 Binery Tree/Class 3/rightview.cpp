#include <iostream>
#include <queue>
#include <vector>
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
void printrightview(node *root, int level, vector<int> &rightview)
{
    if (root == NULL)
    {
        return;
    }
    if (level == rightview.size())
    {
        rightview.push_back(root->data);
    }
    printrightview(root->right, level + 1, rightview);
    printrightview(root->left, level + 1, rightview);
}

int main()
{
    node *root = tree();
    vector<int> rightview;
    int level = 0;
    printrightview(root, level, rightview);
    for (int i = 0; i < rightview.size(); i++)
    {
        cout << rightview[i] << " ";
    }

    return 0;
}