#include<iostream>
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
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}

void postorderTreversal(treeNode* root){
     if(root==NULL){
        return;
     }
     postorderTreversal(root->left);
     postorderTreversal(root->right);
     cout << root->data<<" ";
}
int main(){
    treeNode* root=createTree();
    inorderTraversal(root);
}