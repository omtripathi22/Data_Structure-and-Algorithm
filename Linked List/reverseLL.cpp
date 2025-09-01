#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){
        this->data=0;
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(node*& head){
    node* temp=head;
    while(temp!=NULL){
        cout << temp->data <<" ";
        temp=temp->next;
    }
    cout << endl;
    return;
}

node* reverse(node*& prev,node*& curr){
    if(curr==NULL){
        return prev;
    }
    node* temp=curr->next;
    curr->next=prev;
    reverse(curr,temp);
}

int main(){
    node* first=new node(10);
    node* head=first;
    node* second=new node(20);
    first->next=second;
    node* third=new node(30);
    second->next=third;
    node* fourth=new node(40);
    third->next=fourth;
    print(head);
    node* prev=NULL;
    node* curr=head;
    head=reverse(prev,curr);
    print(head);
}