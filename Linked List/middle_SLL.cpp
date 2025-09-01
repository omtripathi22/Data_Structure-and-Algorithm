#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

int getLength(node*& head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void print(node*& head){
    node* temp=head;
    while(temp!=NULL){
        cout << temp->data <<" ";
        temp=temp->next;
    }
    cout << endl;
    return;
}

node* findMiddle(node*& head){
    node* slow=head;
    node* fast=head->next;
    // int i=0;
    // int len=getLength(head);
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
    }
    return slow;
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
    node* fifth=new node(50);
    fourth->next=fifth;
    print(head);
    node* ans=findMiddle(head);
    cout <<"Middle node is:"<< ans->data <<endl;
}