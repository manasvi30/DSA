//array insert

#include<iostream>
using namespace std;
int main(){
    int arr[20],n;
    int item;

    cout<<"Enter no of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    cout<<"Entered elements are "<<endl;

    for(int i=0; i<n;i++){
        cout<<arr[i]<<endl;
    }

    int a;
    cout<<"Enter the position in which you want to insert item "<<endl;
    cin>>a;
    cout<<"Enter the item you want to insert "<<endl;
    cin>>item;
    

    for(int i=n-1; i>=a-1;i--){
        arr[i+1]=arr[i];
    }
    arr[a-1]=item;
    n++;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<endl;
    }
}
