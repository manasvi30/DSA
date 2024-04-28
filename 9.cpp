#include<iostream>
using namespace std;
struct stack{
    int* arr;
    int size=10;
    int top;
};
int full(struct stack * ptr){
 if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int empty(struct stack* ptr){
  if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }  

}
int push(struct stack*ptr)
    {
    int item;
     if(full(ptr)){
        cout<<"stack overflow";
     }
     else
     {
        cout<<"the new item ue that is to be added is ";
     cin>>item;
     ptr-> top++;
     ptr->arr[ptr->top]=item;
     
     }
}
int pop(struct stack* ptr){
    if(empty(ptr)){
     cout<<"stack underflow"; 
     }  
     else
     {
      int item= ptr->arr[ptr->top];
       ptr->top--;
       cout<<"the item is "<<item;
       
     }
}

void display(struct stack*ptr){
    if(ptr->top>=0){
        cout<<"stack elements are ";
        for(int i=ptr->top; i>=0; i--){
            cout<<ptr->arr[i]<<" ";
            cout<<endl;

        }
        cout<<"Stack empty ";
    }
}

int main()
{    int ch;
  struct stack* ptr = new struct stack[sizeof(struct stack)];
   ptr->top=-1;
   ptr->arr = new int [sizeof(int)];
       
    
   do
    {
        cout << "Enter choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            
            push(ptr);
            break;
        }
        case 2:
        {
            pop(ptr);
            break;
        }
        case 3:
        {
            display(ptr);
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
  




