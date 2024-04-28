//singly linked list search an element

#include<iostream>
using namespace std;
struct node{
    int info;
    struct node* next;
};
typedef struct node nodetype;
nodetype* head=NULL;

void createnode(){
    nodetype * N;
    N=(nodetype*)malloc(sizeof(nodetype));
    N->info=70;
    N->next=NULL;
    head=N;
}

void insertbeginning(int item){
    nodetype * newnode = (nodetype*)malloc(sizeof(nodetype));
    newnode->info=item;
    newnode->next=head;
    head=newnode;
}

void search() {
    if (head == NULL) {
        cout << "Empty linked list" << endl;
    } else {
        int element;
        cout << "Enter the element: ";
        cin >> element;
        nodetype* temp = head;
        bool found = false;
        while (temp != NULL) {
            if (temp->info == element) {
                cout << "Search successful" << endl;
                found = true;
                break;
            }
            temp = temp->next;
        }
        if (!found) {
            cout << "Element not found" << endl;
        }
    }
}

void display()
{
	nodetype *N = head;
	while (N!=NULL)
	{
		cout<<N->info<<endl;
		N=N->next;
	}
	
}

int main(){
    cout<<"creating linked list"<<endl;
    createnode();
    cout<<"inserting in the linked list"<<endl;
    insertbeginning(14);   
    insertbeginning(20);
    insertbeginning(14);
    insertbeginning(27);
    insertbeginning(15);
    insertbeginning(25);
    insertbeginning(92);
    display();
    search();
    
}   