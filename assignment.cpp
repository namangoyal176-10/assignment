// #define NULL 0 

// struct Node {
//     int data;
//     Node* next;
    
//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class LinkedList {
// public:
//     Node* head;

//     LinkedList() {
//         head = NULL;
//     }

//     // 1. Insert a node at the front
//     void insertFront(int x) {
//         Node* newNode = new Node(x);
//         newNode->next = head;
//         head = newNode;
//     }

//     // 2. Insert a node at the end
//     void insertEnd(int x) {
//         Node* newNode = new Node(x);
//         if (head == NULL) {
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }

//     // 3. Insert a node at a specific 0-indexed position
//     void insertPosition(int pos, int x) {
//         if (pos < 0) return;
        
//         if (pos == 0) {
//             insertFront(x);
//             return;
//         }

//         Node* temp = head;
//         for (int i = 0; temp != NULL && i < pos - 1; i++) {
//             temp = temp->next;
//         }

//         if (temp == NULL) {
//             return; 
//         }

//         Node* newNode = new Node(x);
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }

//     // 4. Delete the front node
//     void deleteFront() {
//         if (head == NULL) return;
        
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }

//     // 5. Delete the last node
//     void deleteLast() {
//         if (head == NULL) return;
        
//         if (head->next == NULL) {
//             delete head;
//             head = NULL;
//             return;
//         }
        
//         Node* temp = head;
//         while (temp->next->next != NULL) {
//             temp = temp->next;
//         }
        
//         delete temp->next;
//         temp->next = NULL;
//     }

//     // 6. Delete a node at a specific 0-indexed position
//     void deletePosition(int pos) {
//         if (head == NULL || pos < 0) return;

//         if (pos == 0) {
//             deleteFront();
//             return;
//         }

//         Node* temp = head;
//         for (int i = 0; temp != NULL && i < pos - 1; i++) {
//             temp = temp->next;
//         }

//         if (temp == NULL || temp->next == NULL) {
//             return;
//         }

//         Node* nodeToDelete = temp->next;
//         temp->next = temp->next->next;
//         delete nodeToDelete;
//     }

//     // 7. Search for a key in the list
//     bool search(int key) {
//         Node* temp = head;
//         while (temp != NULL) {
//             if (temp->data == key) {
//                 return true;
//             }
//             temp = temp->next;
//         }
//         return false;
//     }

//     // 8. Find the length of the linked list
//     int length() {
//         int count = 0;
//         Node* temp = head;
//         while (temp != NULL) {
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }
// };
#include<iostream>
#include<list>
using namespace std;


class Node{
public:

int data;
Node* next;

Node(int x){
  data = x;
  next = NULL;
}

};


void inser_Front(Node*& head ,int x){
  Node* new_node = new Node(x);
  new_node -> next = head;
  head = new_node;
}


void insert_back(Node*& head, int x){
  Node* new_node = new Node(x);
  if(head == NULL) head = new_node;

  else{
    Node* temp = head;
    while(temp -> next != NULL)temp = temp -> next;
    temp -> next = new_node;
  }
}



void dispaly(Node* head){
  Node* i = head;
  while (i != NULL){
    cout<<i -> data<<" ";
    i = i-> next;
  }
  cout<<endl;
}


 void pop_front(Node*& head){
        if(head == NULL){
            cout<<"LL is empty\n";
            return ;
        }
        Node* temp = head;
        head = head-> next;
        temp -> next = NULL;

        delete temp;

    }


    void pop_back(Node*& head) {
    if (head == NULL) {
        cout << "LL is empty\n";
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;  
    temp->next = NULL;  
}



void insertPosition(Node*& head,int pos, int x) {
    Node* newNode = new Node(x);

    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid Position\n";
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}



bool search(Node* head,int key) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }

    return false;
}


int length(Node* head) {
    int cnt = 0;
    Node* temp = head;

    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}



int main(){

  int n;
  cin>>n;
Node* head = NULL;

  for(int i=0; i<n; i++){
    int a;
    cin>>a;
    insert_back(head,a);

  }
  

  dispaly(head);

insertPosition(head, 2, 100);
dispaly(head);

pop_front(head);
dispaly(head);

pop_back(head);
dispaly(head);

cout << "Length = " << length(head) << endl;

if(search(head,3))
    cout << "Found\n";
else
    cout << "Not Found\n";
  

  return 0;
}