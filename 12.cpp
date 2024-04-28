//singly linked list insertion at end

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


void insertatend(int item){
    nodetype*N;
    nodetype*temp;
    temp=head;
    N=(nodetype*)malloc(sizeof(nodetype));
    if(head==NULL){
        N->next=NULL;
        head= N;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        N->info=item;
        N->next=NULL;
        temp->next=N;
    }
}

void display(){
    nodetype* N=head;
    while(N!=NULL){
        cout<<N->info<<endl;
        N=N->next;
        
    }
}

int main(){
    cout<<"creating node"<<endl;
    createnode();
    cout<<"inserting at end "<<endl;
    
    insertatend(32);
    insertatend(48);
    insertatend(55);
    
    display();
}