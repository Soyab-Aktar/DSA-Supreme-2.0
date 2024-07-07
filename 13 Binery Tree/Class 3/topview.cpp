#include <iostream>
#include <queue>
#include <map>
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
void printTopView(node *root)
{
    map<int, int> hdToNodemap;
    queue<pair<node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<node *, int> temp = q.front();
        q.pop();

        node *frontNode = temp.first;
        int hd = temp.second;

        // if there is no entry for hd in map, then create a new entry
        if (hdToNodemap.find(hd) == hdToNodemap.end())
        {
            hdToNodemap[hd] = frontNode->data;
        }

        // child ko dekhna h
        if (frontNode->left != NULL)
        {
            q.push(make_pair(frontNode->left, hd - 1));
        }
        if (frontNode->right != NULL)
        {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }
    cout << "printing top view: " << endl;
    for (auto i : hdToNodemap)
    {
        cout << i.second << " ";
    }
}
int main()
{
    node *root = tree();
    printTopView(root);

    return 0;
}