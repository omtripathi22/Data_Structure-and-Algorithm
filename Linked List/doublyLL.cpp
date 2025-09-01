#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return;
}

int getlength(node *&head)
{
    node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(node *&head, node *&tail, int data)
{
    node *newNode = new node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return;
}

void insertAtTail(node *&head, node *&tail, int data)
{
    node *newNode = new node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    return;
}

void insertAtPosition(node*& head,node*& tail,int data,int pos){

    if (head == NULL)
    {
        node *newNode = new node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if(pos==1){
        insertAtHead(head, tail, data);
        return;
    }
    int len=getlength(head);
    if(pos>len){
        insertAtTail(head, tail, data);
        return;
    }
    int i=1;
    node* temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    node*curr= temp->next;
    node *newNode = new node(data);
    temp->next=newNode;
    newNode->prev=temp;
    curr->prev=newNode;
    newNode->next=curr;
    return;
}

void deleteAtPos(node*& head,node*& tail,int pos){
    if(head==NULL){
        cout <<"Linked list is empty" << endl;
        return;
    }
    int len=getlength(head);
    if(pos>len){
        cout <<"enter valid position" << endl;
        return;
    }
    if(pos==1){
        node* temp=head;
        head=temp->next;
        temp->next=NULL;
        return;
    }
    //cout << len << endl;
    if(pos==len){
        int i=1;
        node* temp=head;
        while(i<pos-1){
           temp=temp->next;
           i++; 
        }
        temp->next=NULL;
        tail=temp;
        return;
    }
    int i=1;
    node* temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++; 
    }
    node* curr=temp->next;
    temp->next=curr->next;
    curr->next=NULL;
    return;
}

int main()
{
    node *first = new node(10);
    node *head = first;
    node *tail = first;
    print(head);
    insertAtHead(head, tail, 20);
    print(head);
    insertAtTail(head, tail, 5);
    print(head);
    insertAtPosition(head,tail,15,2);
    print(head);
    insertAtHead(head, tail, 30);
    print(head);
    deleteAtPos(head,tail,4);
    print(head);
}