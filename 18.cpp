//stack implementation linked list
#include <iostream>


using namespace std;

struct node
{
    int info;
    node *next;
};
struct node *head = NULL;

void push(int item)
{
    node *nnode;
    nnode = new node;
    nnode->info = item;
    nnode->next = head;
    head = nnode;
}

void pop()
{
    if (head == NULL)
        cout << "Stack Underflow" << endl;
    else
    {
        struct node *temp = head;
        head = head->next;
        cout << "The popped element is " << temp->info << endl;
        delete temp;
    }
}

void display()
{
    struct node *ptr;
    if (head == NULL)
        cout << "stack is empty";
    else
    {
        ptr = head;
        cout << "Stack elements are: ";
        while (ptr != NULL)
        {
            cout << ptr->info << " ";
            ptr = ptr->next;
        }
    }
    cout << endl;
}

int main()
{
    int ch, item;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;
    do
    {
        cout << "Enter choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter item to be pushed:" << endl;
            cin >> item;
            push(item);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 4);
    return 0;
}