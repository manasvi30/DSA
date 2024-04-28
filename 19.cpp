//insertion doubly
#include<iostream>
using namespace std;

struct node {
    int item;
    struct node* next;
    struct node* prev;
};

node* head = nullptr;
node* tail = nullptr;
int listSize = 0;

void insertFront(int item) {
    node* newnode = new node;
    newnode->item = item;
    newnode->next = nullptr;
    newnode->prev = nullptr;

    if (head == nullptr) {
        head = newnode;
        tail = newnode;
    } else {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    listSize++;
}

void insertEnd(int item) {
    node* newnode = new node;
    newnode->item = item;
    newnode->next = nullptr;
    newnode->prev = nullptr;

    if (head == nullptr) {
        head = newnode;
        tail = newnode;
    } else {
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
    listSize++;
}

void insertAt(int item, int p) {
    
    if (p <= 0) {
        insertFront(item);
    } else if (p >= listSize) {
        insertEnd(item);
    } else {
        node* newnode = new node;
        newnode->item = item;
        

        node* current = head;
        for (int i = 0; i < p - 1; i++) {
            current = current->next;
        }

        newnode->prev = current;
        newnode->next = current->next;

        current->next->prev = newnode;
        current->next = newnode;
        listSize++;
    }
}

void display() {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->item << endl;
        temp = temp->next;
    }
}

int main() {
    cout << "Creating a linked list" << endl;
    cout << "Inserting elements at the front of the linked list" << endl;
    insertFront(14);
    insertFront(20);
    display();
    
    cout << "After inserting at the end" << endl;
    insertEnd(23);
    insertEnd(55);
    display();
    
    cout << "After insertion at a specific position" << endl;
    insertAt(22,2);
    display();

    return 0;
}
