#include<iostream>
using namespace std;



class Node {
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;

    }
};


// traversing

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";

        temp = temp->next;
    }
}



// length of Linked list

int length(Node* head){
    
    int count = 0;
    Node* temp = head;

    while(temp != NULL){
        count = count + 1;

        temp = temp->next;
    }
    return count ;
}


// insertion to beginning

void insertFront(Node*& head,int x){

    Node* temp = new Node(x);

    temp->next = head;

    head = temp;


    
}


// insertion at end

void insertEnd(Node*& head,int x){

    Node* node = new Node(x);

    if(head == NULL){
        head = node;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){

        temp = temp->next;

    }
    temp->next = node;
}



// delete from beginning

void deleteFront(Node*& head){

    if(head == NULL){
        return;
    }

    Node* temp = head;

    head = head->next;

    delete temp;
}




// delete from end

void deleteEnd(Node*& head){

    if(head == NULL){
        return;
    }

    if(head->next == NULL){
        delete head;

        head = NULL; 
        // .........................................
    }



    

    Node* temp = head;

    while(temp->next == NULL){

        temp = temp->next;
    }
    delete temp->next;

    temp->next = NULL;
}




// Searching in  linked list

bool search(Node*& head,int key){

    Node* temp = head;

    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
    }
    return false;
}



// insertion at given position

void insertPosition(Node*& head,int pos,int val){
    
    if(pos == 1){

        Node* temp = new Node(val);

        temp->next = head;
        head = temp;
        return;
    }

    Node* curr = head;
    for(int i=1;i<pos-1 && curr!=NULL;i++){

        curr = curr->next;
    }

    if(curr == NULL){
        return;
    }

    Node* node = new Node(val);

    node->next = curr->next;
    curr->next = node;
}


// delete at position

void deletePosition(Node*& head,int pos){
    
    if(head == NULL){
        return;
    }

    if(pos == 1){

        Node* temp = head;

        head = head->next;

        delete temp;

        return;
    }

    Node* curr = head;

    for(int i=1; i<pos-1 && curr!=NULL;i++){
        curr = curr->next;
    }

    if(curr == NULL || curr->next == NULL)
    return;

    Node* temp = curr->next;
    curr->next = temp->next;

    delete temp;
}





    // sum of node od linked list

    int sumLL(Node*& head){

        int sum = 0;
        Node* temp = head;
        while(temp != NULL){
            sum = sum + temp->data;        
             }
        return sum;
     }












int main(){
    Node* head;

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    Node* fifth = new Node(50);




    head = first;
    head -> next = second;
    head -> next -> next = third;
    head -> next -> next -> next = forth;
    head -> next -> next -> next -> next = fifth;


    Node* temp = head;
    while(temp != NULL){
        cout<<temp-> data << " ";
        temp = temp -> next;
    }

}