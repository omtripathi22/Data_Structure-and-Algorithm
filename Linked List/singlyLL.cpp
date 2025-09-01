#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(){
        this->data=0;
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAthead(node* &head,node* &tail,int data){
    node* newNode=new node(data);
    newNode->next=head;
    if(head==NULL){
        tail=newNode;
    }
    head= newNode;
    return;
}

void insertAttail(node* &head,node* &tail,int data){
    node* newNode=new node(data);
    if(tail==NULL){
        tail=newNode;
        head=newNode;
    }
    else{
       tail->next=newNode; 
    }
    tail=newNode;
    return;
}

int findlength(node* &head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int data,int pos,node*& head,node*& tail){
    if(head==NULL){
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    if(pos==0){
        insertAthead(head,tail,data);
        return;
    }
    int len=findlength(head);
    if(pos>=len){
        insertAttail(head,tail,data);
        return;
    }
    int i=1;
    node*prev=head;
    while(i<pos){
       prev=prev->next;
       i++;
    }
    node* curr=prev->next;
    node* newNode=new node(data);
    newNode->next=curr;
    prev->next=newNode;
    return;
}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    return;
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    insertAthead(head,tail,30);
    print(head);
    cout << endl;
    insertAthead(head,tail,50);
    print(head);
    cout << endl;
    insertAthead(head,tail,40);
    print(head);
    cout << endl;
    insertAttail(head,tail,20);
    print(head);
    cout << endl;
    cout << "length of LL is:" << findlength(head) << endl;
    insertAtPosition(33,3,head,tail);
    print(head);
    cout << endl;
    cout << "length of LL is:" << findlength(head) << endl;
}