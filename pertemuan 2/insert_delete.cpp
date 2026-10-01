#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* head = NULL;
node* tail = NULL;

// Insert First
void insertFirst(int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        newnode -> next = head;
        head = newnode;
    }
}
// Insert Last
void insertLast(int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;
    if (head == NULL) {
        head = newnode;
        tail = head;
    } else {
        tail -> next = newnode;
        tail = newnode;
    }
}
// Insert After
void insertAfter(int n, int check) {
    if (head == NULL) {
        cout<<"List Kosong!"<<endl;
        return;
    }
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    node *p = head;
    while (p != NULL && p -> value != check) {
        p = p -> next;
    }
    if (p == NULL) {
        cout<<"Node dengan nilai "<<check<<" tidak ditemukan!"<<endl;
        delete newnode;
    } else {
        newnode -> next = p -> next;
        p -> next = newnode;
        if (p == tail) {
            tail = newnode;
        }
    }
}
// Delete First
void deleteFirst (){
    if (head== NULL) {
        cout<<"List Kosong!"<<endl;
        return;
    }
    node *temp = head;
    head = head -> next;
    if (head == NULL) tail == NULL;
    delete temp;
}
// Delete Last
void deleteLast (){
    if (head== NULL) {
        cout<<"List Kosong!"<<endl;
        return;
    }
    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }
    node *p = head;
    while (p -> next != tail) {
        p = p -> next;
    }
    delete tail;
    tail = p;
    tail -> next = NULL;
}
// Delete Middle
void deleteMiddle (int check){
    if (head== NULL) {
        cout<<"List Kosong!"<<endl;
        return;
    }
    if (head -> value == check) {
        deleteFirst();
        return;
    }
    node *p = head;
    while (p -> next != NULL && p -> next -> value != check) {
        p = p -> next;
    }
    if (p -> next == NULL) {
        cout<<"Node dengan nilai "<<check<<" tidak ditemukan!\n";
    } else {
        node *temp = p -> next;
        p -> next = temp -> next;
        if (temp == tail) tail = p;
        delete temp;
    }
}
void display() {
    node *temp = head;
    cout<<"List Linked List: \n";
    while (temp != NULL) {
        cout<<temp->value<<" -> ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    system("clear");
    insertFirst(10);
    insertFirst(5);
    insertLast(20);
    insertAfter(30, 10);
    deleteFirst();
    display();
    deleteMiddle(30);
    display();

    return 0;
}