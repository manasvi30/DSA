//queue

#include<iostream>
#define MAX 6
using namespace std;
struct queue{
    int item[MAX];
    int front=0;
    int rear=-1;
    
};

int isempty(struct queue * p){
    if(p->rear<p->front){
        return 1;
    }
    else {
        return 0;
    }
}

int isfull(struct queue *p ){
    if(p->rear==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue *p , int n){
    if (isfull(p))
    {
        cout<<"full insertion cannot be done"<<endl;
    }
    else{
        p->rear++;
        p->item[p->rear]=n;
        cout<<endl<<"inserted "<<n;

    }
    
}

int dequeue(struct queue *p){
    if(isempty(p)){
        cout<<"empty cannot be deleted"<<endl;
    }
    else{
        p->front++;
         return p->item[p->front];
    }
    
    
}

int display(struct queue *p){
    if(isempty(p)){
        cout<<"is empty"<<endl;
    }
    
    else{
        cout<<endl<<"front index-> "<<p->front<<endl;
        cout<<"items -> "<<endl;
    for(int i=p->front; i<=p->rear; i++){
        cout<<p->item[i]<<endl;
    }
    cout<<"rear index-> "<<p->rear<<endl;
    }
}


int main(){
    struct queue p;
    enqueue(&p,1);
    enqueue(&p,2);
    enqueue(&p,3);
    enqueue(&p,4);

    dequeue(&p);

    

        display(&p);
    
    return 0;
}


