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

void printLevelByLevel(Node* root) {
    if(!root) cout << "Empty Tree";
    queue<Node* > q;
    q.push(root);
    
    while(!q.empty()) {
        Node* f = q.front();
        q.pop();
        
        cout << f->val << " ";
        
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        
    }
}

Node* takeInput(){
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node* > q;
    q.push(root);
    
    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        
        Node* m;
        Node* n;
        
        if(l == -1)
            m == NULL;
        else
            m = new Node(l);
        
        if(r == -1)
            n == NULL;
        else
            n = new Node(r);
        
        f->left = m;
        f->right = n;
        
        if(f->left) q.push(m);
        if(f->right) q.push(n);

    }
    
    return root;
}

int main() {
    // Node* root = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);
    // Node* c = new Node(40);
    // Node* d = new Node(50);
    // Node* e = new Node(60);
    // Node* f = new Node(70);
    // Node* g = new Node(80);
    // Node* h = new Node(90);
    // Node* i = new Node(100);

    // root->left = a;
    // root->right = b;
    // a->left = c;
    // a->right = h;
    // c->right = e;
    // b->right = d;
    // d->left = f;
    // d->right = g;
    // h->right = i;
    
    Node* root = takeInput();
    printLevelByLevel(root);
    return 0;
}

