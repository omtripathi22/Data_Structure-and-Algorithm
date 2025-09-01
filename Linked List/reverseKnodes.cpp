#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int getLength(node *&head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

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

node *reverse(node *&head, int k)
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
        return NULL;
    }
    int len = getLength(head);
    if (k > len)
    {
        return head;
    }
    node* prev=NULL;
    node* temp=head;
    node* curr=temp->next;
    int i=0;
    while(i<k){
        curr=temp->next;
        temp->next=prev;
        prev=temp;
        temp=curr;
        i++;
    }
    if(curr!=NULL){
        head->next=reverse(curr,k);
    }
    return prev;
}

int main()
{
    node *first = new node(10);
    node *head = first;
    node *second = new node(20);
    first->next = second;
    node *third = new node(30);
    second->next = third;
    node *fourth = new node(40);
    third->next = fourth;
    node *fifth = new node(50);
    fourth->next = fifth;
    node *sixth = new node(60);
    fifth->next = sixth;
    print(head);
    head=reverse(head,2);
    print(head);
}