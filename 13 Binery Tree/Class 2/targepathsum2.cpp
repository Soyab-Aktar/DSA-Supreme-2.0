#include <iostream>
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

void pathsum(node *root, vector<vector<int>> &ans, vector<int> &temp, int targetsum, int sum)
{
    if (root == NULL)
    {
        return;
    }
    sum += root->data;
    temp.push_back(root->data);
    if (root->left == NULL && root->right == NULL)
    {
        if (sum == targetsum)
        {
            ans.push_back(temp);
        }
    }
    else
    {
        pathsum(root->left, ans, temp, targetsum, sum);
        pathsum(root->right, ans, temp, targetsum, sum);
    }
    temp.pop_back(); // Remove the current node before backtracking
}

int main()
{
    node *root = tree();
    int targetsum;
    cout << "Enter your sum target : ";
    cin >> targetsum;
    vector<vector<int>> ans;
    vector<int> temp;

    pathsum(root, ans, temp, targetsum, 0);

    if (ans.empty())
    {
        cout << "No paths found with the target sum." << endl;
    }
    else
    {
        cout << "Paths with the target sum:" << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}