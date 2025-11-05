#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to insert a new node at the end
void insertAtTail(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Print linked list
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

//Function to reverse the linked list
Node* reverse(Node*& prev,Node*& curr){
    if(curr==NULL){
        return prev;
    }
    Node* temp=curr->next;
    curr->next=prev;
    reverse(curr,temp);
}

int main() {
    Node* head = NULL;
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertAtTail(head, val);
    }

    cout << "Linked list: ";
    print(head);

    Node* prev=NULL;
    Node* curr=head;
    head=reverse(prev,curr);
    cout << "Linked list after reversal:";
    print(head);
}