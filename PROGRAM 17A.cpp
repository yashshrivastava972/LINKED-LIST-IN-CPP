// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: CREATE A SINGLE NODE OF THE LINKED LIST (EXPERIMENT: 17A)

// CODE: 

#include <iostream>
using namespace std;

struct Node {
    int data;      // To store data
    Node* next;    // Pointer to the next node
};

int main() {
    // Create a single node dynamically
    Node* head = new Node;

    // Assign values
    head->data = 10;   // store data
    head->next = nullptr; // no next node yet

    // Display node data
    cout << "Data: " << head->data << endl;
    cout << "Next: " << head->next << endl;  // it should print 0 or NULL

    // Free memory
    delete head;
    
    return 0;
}

// OUTPUT:

// Data: 10
// Next: 0

