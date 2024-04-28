//deletion at doubly

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

void display() {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->item << endl;
        temp = temp->next;
    }
}

void deleteFront() {
    if (head == nullptr) {
        return;
    }

    node* temp = head;
    head = head->next;

    if (head == nullptr) {
        tail = nullptr;
    } else {
        head->prev = nullptr;
    }

    delete temp;
    listSize--;
}

void deleteEnd() {
    if (tail == nullptr) {
        return;
    }

    node* temp = tail;
    tail = tail->prev;

    if (tail == nullptr) {
        head = nullptr;
    } else {
        tail->next = nullptr;
    }

    delete temp;
    listSize--;
}

void deleteAt(int position) {
    if (position < 0 || position >= listSize) {
        return;
    }

    if (position == 0) {
        deleteFront();
    } else if (position == listSize - 1) {
        deleteEnd();
    } else {
        node* current = head;
        for (int i = 0; i < position - 1; i++) {
            current = current->next;
        }

        node* toDelete = current->next;
        current->next = toDelete->next;
        toDelete->next->prev = current;

        delete toDelete;
        listSize--;
    }
}

int main() {
    cout << "Creating a linked list" << endl;
    cout << "Inserting elements at the front of the linked list" << endl;
    insertFront(14);
    insertFront(20);
    insertFront(14);
    insertFront(27);
    insertFront(15);
    insertFront(25);
    insertFront(92);
    display();

    cout << "Deleting the front node" << endl;
    deleteFront();
    display();

    cout << "Deleting the end node" << endl;
    deleteEnd();
    display();

    cout << "Deleting a node at position 2" << endl;
    deleteAt(2);
    display();

    return 0;
}
