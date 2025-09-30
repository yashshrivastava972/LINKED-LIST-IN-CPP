// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: ADD MULTIPLE NODES AT THE START OF THE LINKED LIST (EXPERIMENT: 17C)

// CODE: 

#include <iostream>
using namespace std;

struct Node {
    int data;        // Data of the node
    Node* next;      // Pointer to the next node
};

// FUNCTION TO ADD NODE AT THE START
void insertAtStart(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;   // New node points to old head
    head = newNode;         // New node becomes the new head
}

// FUNCTION TO DISPLAY THE LINKED LIST
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr; // Start with empty list

    // ADD MULTIPLE NODES AT THE START
    insertAtStart(head, 10);
    insertAtStart(head, 20);
    insertAtStart(head, 30);
    insertAtStart(head, 40);

    // DISPLAY LINKED LIST
    cout << "LINKED LIST ELEMENTS: ";
    display(head);

    // FREE MEMORY
    Node* temp = head;
    while (temp != nullptr) {
        Node* del = temp;
        temp = temp->next;
        delete del;
    }

    return 0;
}

// OUTPUT:

// LINKED LIST ELEMENTS: 40 30 20 10 
