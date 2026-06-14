#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int x) {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

// Traverse DLL
void printDLL(Node* head) {
    Node* temp = head;

    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert Front
void insertFront(Node*& head, int x) {
    Node* temp = new Node(x);

    temp->next = head;

    if (head)
        head->prev = temp;

    head = temp;
}

// Insert End
void insertEnd(Node*& head, int x) {
    Node* node = new Node(x);

    if (head == NULL) {
        head = node;
        return;
    }

    Node* temp = head;

    while (temp->next)
        temp = temp->next;

    temp->next = node;
    node->prev = temp;
}

// Delete Node
void deleteNode(Node*& head, Node* node) {
    if (node == NULL)
        return;

    if (node == head)
        head = node->next;

    if (node->prev)
        node->prev->next = node->next;

    if (node->next)
        node->next->prev = node->prev;

    delete node;
}

// Reverse DLL
Node* reverseLL(Node* head) {
    Node* curr = head;
    Node* temp = NULL;

    while (curr) {
        temp = curr->prev;

        curr->prev = curr->next;
        curr->next = temp;

        curr = curr->prev;
    }

    if (temp)
        head = temp->prev;

    return head;
}

// Traverse Circular DLL
void printCircular(Node* head) {
    if (head == NULL)
        return;

    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {

    Node* head = NULL;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);

    cout << "Original DLL: ";
    printDLL(head);

    insertFront(head, 5);

    cout << "After Insert Front: ";
    printDLL(head);

    head = reverseLL(head);

    cout << "After Reverse: ";
    printDLL(head);

    deleteNode(head, head->next);

    cout << "After Deleting Second Node: ";
    printDLL(head);

    return 0;
}