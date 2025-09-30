// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: TO ADD MULTIPLE NODES AT THE END OF THE LINKED LIST (EXPERIMENT: 17B)

// CODE:

#include <iostream>
using namespace std;

struct Node {
    int data;        // Data of the node
    Node* next;      // Pointer to the next node
};

// Function to add node at the end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;  // If list is empty, new node becomes head
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;  // Traverse to last node
        }
        temp->next = newNode;  // Link new node at the end
    }
}

// Function to display the linked list
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

    // Add multiple nodes
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    // Display linked list
    cout << "Linked List Elements: ";
    display(head);

    // Free memory
    Node* temp = head;
    while (temp != nullptr) {
        Node* del = temp;
        temp = temp->next;
        delete del;
    }

    return 0;
}

// OUTPUT:

// Linked List Elements: 10 20 30 40 
