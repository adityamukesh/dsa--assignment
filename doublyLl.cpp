#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

    class LinkedList {
public:
   Node* head;
   LinkedList() {
      head = NULL;
   }


// traversal in doubly LL

void print(Node* head){
    Node* temp = head;

    while(temp){

        cout<< temp->data <<" ";
        temp = temp->next;
    }
}




// Insert at Beginning

void insertFront(Node*& head,int x){
    Node* node = new Node(x);
    node->next = head;

    if(head)
    head->prev = node;

    head = node;
}



// Insert at End

void insertEnd(Node*& head,int x){
    Node* node = new Node(x);

    if(head == NULL){
        head = node;
        return;
    }

    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }

        temp->next = node;
        node->prev = temp;
    
}




// Delete a Node

void deleteNode(Node* node){
    if(node == NULL){
        return;

    }
    if(node->prev){
        node->prev->next = node->next;
    }
    if(node->next){
        node->next->prev = node->prev;
    }
    delete node;
}


// Reverse a doubly Ll

Node* reverseDll(Node* head)
{
    Node* curr= head;
    Node* temp = NULL;

    while(curr)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        curr = curr->prev;
    }
    if(temp){
        head = temp->prev;
    }
    return head;

}

};
int main() {

}