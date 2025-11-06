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

//Function to merge to sorted linked list
Node* mergeSorted(Node* list1, Node* list2) {
    // Base cases
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    Node* result = NULL;

    if (list1->data < list2->data) {
        result = list1;
        result->next = mergeSorted(list1->next, list2);
    } else {
        result = list2;
        result->next = mergeSorted(list1, list2->next);
    }

    return result;
}
int main() {
    Node* head1 = NULL;
    int n;
    cout << "Enter number of nodes in 1st list: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertAtTail(head1, val);
    }
    
    Node* head2 = NULL;
    int m;
    cout << "Enter number of nodes in 2nd list: ";
    cin >> m;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertAtTail(head2, val);
    }
    cout << "List 1: ";
    print(head1);
    cout << "List 2: ";
    print(head2);

    Node* merged = mergeSorted(head1, head2);

    cout << "Merged: ";
    print(merged);
}