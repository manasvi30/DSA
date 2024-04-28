//deletion at middle singly linked list


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

void deleteatmiddle() {
    nodetype* temp = head;
    if (head == NULL) {
        cout << "Empty list. Deletion not possible." << endl;
    } else if (head->next == NULL) {
        head = NULL;
        free(temp);
    } else {
        int p;
        cout << "Enter position: ";
        cin >> p;
        if (p == 1) {
            head = temp->next;
            free(temp);
        } else {
            for (int i = 1; i < p - 1; i++) {
                if (temp == NULL || temp->next == NULL) {
                    cout << "Invalid position" << endl;
                    return;
                }
                temp = temp->next;
            }
            nodetype* deleteNode = temp->next;
            temp->next = temp->next->next;
            free(deleteNode);
        }
    }
}

void display(){
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
    cout<<"delete"<<endl;
    deleteatmiddle();
    deleteatmiddle();
    display();

}   