#include <iostream>

using namespace std;

struct node {
    int value;
    node* next;
};

node* head = NULL;

// Stack LIFO - Push
void push(int n) {
    node* newnode = new node;
    newnode->value = n;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        newnode->next = head;
        head = newnode;
    }
}

// Stack LIFO - Pop
void pop() {
    if (head == NULL) {
        cout << "Stack Kosong!" << endl;
        return;
    }

    node* temp = head;
    head = head->next;

    delete temp;
}

// Melihat data paling atas
void top() {
    if (head == NULL) {
        cout << "Stack Kosong!" << endl;
        return;
    }

    cout << "Data paling atas: " << head->value << endl;
}

// Menampilkan Stack
void display() {
    if (head == NULL) {
        cout << "Stack Kosong!" << endl;
        return;
    }

    node* temp = head;

    cout << "Stack LIFO: ";

    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    system("clear");

    push(10);
    push(20);
    push(30);
    push(40);

    display();

    top();

    pop();
    display();

    pop();
    display();

    top();

    return 0;
}