#include <iostream>

using namespace std;

struct node {
    int value;
    node* next;
};

node* head = NULL;
node* tail = NULL;

// Queue FIFO - Enqueue
void enqueue(int n) {
    node* newnode = new node;
    newnode->value = n;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

// Queue FIFO - Dequeue
void dequeue() {
    if (head == NULL) {
        cout << "Queue Kosong!" << endl;
        return;
    }

    node* temp = head;
    head = head->next;

    if (head == NULL) {
        tail = NULL;
    }

    delete temp;
}

// Melihat data paling depan
void front() {
    if (head == NULL) {
        cout << "Queue Kosong!" << endl;
        return;
    }

    cout << "Data paling depan: " << head->value << endl;
}

// Menampilkan Queue
void display() {
    if (head == NULL) {
        cout << "Queue Kosong!" << endl;
        return;
    }

    node* temp = head;

    cout << "Queue FIFO: ";

    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    system("clear");

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    front();

    dequeue();
    display();

    dequeue();
    display();

    front();

    return 0;
}