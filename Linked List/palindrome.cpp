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

void print(node*& head){
    node* temp=head;
    while(temp!=NULL){
        cout << temp->data <<" ";
        temp=temp->next;
    }
    cout << endl;
}

node* reverse(node*& curr){
    node* prev=NULL;
    node* right=curr->next;
    while(curr!=NULL){
        right=curr->next;
        curr->next=prev;
        prev=curr;
        curr=right;
    }
    return prev;
}

bool checkPalindrome(node*& head){
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
    }
    node* temp1=reverse(slow->next);
    node* temp2=head;
    while(temp1!=NULL){
        if(temp1->data!=temp2->data){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
   return true;
}

int main(){
    node* first=new node(10);
    node* head=first;
    node* second=new node(20);
    first->next=second;
    node* third=new node(30);
    second->next=third;
    node* fourth=new node(20);
    third->next=fourth;
    node* fifth=new node(10);
    fourth->next=fifth;
    print(head);
    if(checkPalindrome(head)){
        cout <<"Linked list is palindrome"<< endl;
    }
    else{
        cout <<"Linked list is not palindrome"<< endl;
    }

}