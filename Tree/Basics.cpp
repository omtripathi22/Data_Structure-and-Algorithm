#include<iostream>
#include<queue>
using namespace std;
class treeNode{
    public:
    int data;
    treeNode* left;
    treeNode* right;
    treeNode(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

treeNode* createTree(){
    cout <<"Enter the node value:" << endl;
    int data;
    cin >> data;
    if(data==-1){
        return NULL;
    }
    treeNode* root=new treeNode(data);
    cout <<"Enter the left child of:" << root->data <<endl;
    root->left=createTree();
    cout <<"Enter the right child of:" << root->data <<endl;
    root->right=createTree();

    return root;
}

void inorderTraversal(treeNode* root){
     if(root==NULL){
        return; 
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTreversal(treeNode* root){
     if(root==NULL){
        return; 
    }
    cout << root->data << " ";
    preorderTreversal(root->left);
    preorderTreversal(root->right);
}

void postorderTreversal(treeNode* root){
     if(root==NULL){
        return;
     }
     postorderTreversal(root->left);
     postorderTreversal(root->right);
     cout << root->data<<" ";
}

treeNode* getLastNode(treeNode* root) {
    queue<treeNode*> q;
    q.push(root);
    treeNode* node = nullptr;
    while (!q.empty()) {
        node = q.front();
        q.pop();
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
    return node;
}

void deleteLastNode(treeNode* root, treeNode* delNode) {
    queue<treeNode*> q;
    q.push(root);
    while (!q.empty()) {
        treeNode* node = q.front();
        q.pop();

        if (node->left) {
            if (node->left == delNode) {
                delete node->left;
                node->left = nullptr;
                return;
            } else {
                q.push(node->left);
            }
        }

        if (node->right) {
            if (node->right == delNode) {
                delete node->right;
                node->right = nullptr;
                return;
            } else {
                q.push(node->right);
            }
        }
    }
}

treeNode* deleteNode(treeNode* root, int value) {
    if (!root) return nullptr;
    if (!root->left && !root->right) {
        if (root->data == value) {
            delete root;
            return nullptr;
        }
        return root;
    }

    queue<treeNode*> q;
    q.push(root);

    treeNode* targetNode = nullptr;
    treeNode* node = nullptr;

    while (!q.empty()) {
        node = q.front();
        q.pop();
        if (node->data == value) {
            targetNode = node;
        }
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }

    if (targetNode) {
        treeNode* deepest = getLastNode(root);
        targetNode->data = deepest->data; // copy deepest node data
        deleteLastNode(root, deepest);     // delete deepest node
    }

    return root;
}
int main(){
    treeNode* root=createTree();
    inorderTraversal(root);
    cout << endl<< "Enter the value you want to delete:";
    int val;
    cin >> val;
    deleteNode(root,val);
    cout << root->data;
}