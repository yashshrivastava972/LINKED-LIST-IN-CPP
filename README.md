# Aim: To Study & Implement Linked List.

# Tool: VS CODE.

# Theory:

•	Linked List is a linear data structure, in which elements are not stored at a contiguous location, rather they are linked using pointers. 

•	Linked List forms a series of connected nodes, where each node stores the data and the address of the next node.

<img width="957" height="189" alt="image" src="https://github.com/user-attachments/assets/03429d6c-2a6a-45f1-b644-3214bc682905" />

Why linked list data structure needed?

•	Dynamic Data structure: The size of memory can be allocated or de-allocated at run time based on the operation insertion or deletion.

•	Ease of Insertion/Deletion: The insertion and deletion of elements are simpler than arrays since no elements need to be shifted after insertion and deletion, Just the address needed to be updated.

•	Efficient Memory Utilization: As we know Linked List is a dynamic data structure the size increases or decreases as per the requirement so this avoids the wastage of memory. 

•	Implementation: Various advanced data structures can be implemented using a linked list like a stack, queue, graph, hash maps, etc.

## BRIEF INTRODUCTION

A linked list is a linear data structure where elements (called nodes) are stored at non-contiguous memory locations.

Each node contains data and a pointer (link) to the next node.

Unlike arrays, linked lists can dynamically grow or shrink in size.

## TYPES OF LINKED LIST

SINGLY LINKED LIST

Each node points to the next node.

Traversal is possible only in one direction.

DOUBLY LINKED LIST

Each node has two pointers: one to the next node and one to the previous node.

Traversal is possible in both directions.

CIRCULAR LINKED LIST

The last node points back to the first node.

Can be singly or doubly circular.

## BASIC OPERATIONS

CREATION OF NODE – Define structure/class with data and next pointer.

INSERTION – Add a node at the start, end, or any given position.

DELETION – Remove a node from the start, end, or a specific position.

TRAVERSAL / DISPLAY – Visit and print all nodes.

SEARCHING – Locate a node with a specific value.

## ADVANTAGES

Dynamic memory allocation (no need to know size in advance).

Efficient insertion and deletion (no shifting like arrays).

Can implement stacks, queues, and other advanced data structures.

## DISADVANTAGES

Extra memory required for storing pointers.

Sequential access (cannot access elements directly like arrays).

Traversing can be slower compared to arrays.

## APPLICATIONS

Used in implementing stacks, queues, and graphs.

Dynamic memory management.

Useful in polynomial manipulation, memory allocation tables, and file systems.

# Algorithms:

## ALGORITHM TO CREATE A SINGLE NODE OF A LINKED LIST

START

Define a structure Node with two fields:

data → to store the value.

next → pointer to the next node.

Create a pointer head of type Node.

Dynamically allocate memory for head using new.

Assign a value (e.g., 10) to head->data.

Set head->next = NULL because there is only one node.

Print the contents of the node (data and next).

Free the allocated memory using delete.

STOP

## ALGORITHM TO ADD MULTIPLE NODES AT THE END OF A LINKED LIST

START

Define a structure Node with:

data → to store integer value

next → pointer to the next node

Define a pointer head and set it to NULL (empty list).

Repeat the following steps for each new value to be inserted:

Create a new node using dynamic memory allocation.

Assign the value to newNode->data.

Set newNode->next = NULL.

If head == NULL, set head = newNode.

Otherwise:

Set temp = head.

Traverse the list until temp->next == NULL.

Set temp->next = newNode.

After all insertions, traverse the list from head to NULL and display the data of each node.

Free the allocated memory by deleting all nodes one by one.

STOP

## ALGORITHM TO ADD MULTIPLE NODES AT THE START OF A LINKED LIST

START

Define a structure Node with:

data → to store integer value

next → pointer to the next node.

Initialize the list with head = NULL.

For each new value to be inserted at the start:

Create a new node using dynamic memory allocation.

Assign the value to newNode->data.

Set newNode->next = head.

Update head = newNode (new node becomes the first node).

After all insertions, traverse the list starting from head until NULL, printing the data of each node.

Free the allocated memory by deleting each node one by one.

STOP

# Conclusion:

The linked list is a dynamic data structure that allows efficient insertion and deletion of nodes compared to arrays.

We successfully created a single node, added multiple nodes at the end, and added multiple nodes at the start.

Linked lists help in understanding pointers, dynamic memory allocation, and node linking in C++.

Traversal of a linked list allows accessing all nodes sequentially.

Overall, the experiment demonstrates how data can be stored and manipulated dynamically using linked lists, providing flexibility over static data structures like arrays.
