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
    cout << "Enter your data (enter -1 for NULL): ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    else
    {
        node *root = new node(data);
        cout << "Enter left child of " << data << endl;
        root->left = tree();
        cout << "Enter right child of " << data << endl;
        root->right = tree();
        return root;
    }
}

node *lca(node *root, node *p, node *q)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == p->data)
    {
        return p;
    }
    if (root->data == q->data)
    {
        return q;
    }

    node *leftlca = lca(root->left, p, q);
    node *rightlca = lca(root->right, p, q);

    if (leftlca != NULL && rightlca != NULL)
    {
        return root;
    }
    return (leftlca != NULL) ? leftlca : rightlca;
}

int main()
{
    node *root = tree();

    int pdata, qdata;
    cout << "Enter data for node p: ";
    cin >> pdata;
    cout << "Enter data for node q: ";
    cin >> qdata;

    node *p = new node(pdata);
    node *q = new node(qdata);

    node *ans = lca(root, p, q);

    if (ans != NULL)
    {
        cout << "LCA is: " << ans->data << endl;
    }
    else
    {
        cout << "LCA not found" << endl;
    }

    // Clean up dynamically allocated nodes for p and q
    delete p;
    delete q;

    return 0;
}
