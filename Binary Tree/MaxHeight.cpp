#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node*  left;
    Node*  right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int maxHeight(Node *root) {
    if (root == NULL) return 0;
    return max(maxHeight(root->left), maxHeight(root->right)) + 1;
}

Node* takeInput(){
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty()){
    
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int main() {
    
    Node* root = takeInput();
    cout << maxHeight(root);
    return 0;
}