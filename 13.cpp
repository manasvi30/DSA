//insert at middle

#include<iostream>
using namespace std;
struct node{
    int info;
    struct node * next;
};
typedef struct node nodetype;
nodetype* head=NULL;
 
void createnode(){
    nodetype* n;
    n=(nodetype*)malloc(sizeof(nodetype));
    n->info=48;
    n->next=NULL;
    head=n;
}
void insertbeginning(int item){
    nodetype * newnode = (nodetype*)malloc(sizeof(nodetype));
    newnode->info=item;
    newnode->next=head;
    head=newnode;
}

void nodeatmiddle(int item){
    nodetype* temp;
    nodetype*n;
    n=(nodetype*)malloc(sizeof(nodetype));
    temp=head;
    if(head==NULL){
        n->next=NULL;
        head= n;
    }
    int p;
    cout<<"enter position"<<endl;
    cin>>p;
    for(int i=1; i<p-1;i++){
         if (temp == NULL || temp->next == NULL) {
                cout << "Invalid position" << endl;
                return;
            }
        temp=temp->next;
    }
    n->info=item;
    n->next=temp->next;
    temp->next=n;



}

void display(){
    nodetype*N=head;
    while(N!=NULL){
        cout<<N->info<<endl;
        N=N->next;

    }
}

int main(){
    createnode();
    insertbeginning(14);   
    insertbeginning(20);
    insertbeginning(14);
    insertbeginning(27);

    display();
    nodeatmiddle(45);
    nodeatmiddle(33);
    display();
}

