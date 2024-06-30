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
void printleftview(node *root, int level, vector<int> &leftview)
{
    if (root == NULL)
    {
        return;
    }
    if (level == leftview.size())
    {
        leftview.push_back(root->data);
    }
    printleftview(root->left, level + 1, leftview);
    printleftview(root->right, level + 1, leftview);
}

int main()
{
    node *root = tree();
    vector<int> leftview;
    int level = 0;
    printleftview(root, level, leftview);
    for (int i = 0; i < leftview.size(); i++)
    {
        cout << leftview[i] << " ";
    }

    return 0;
}