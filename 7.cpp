//modify array

#include <iostream>
using namespace std;
int main(){
    int arr[20],n;
    int item;
    cout<<"Enter the no of elements of an array "<<endl;
    cin>>n;
    cout<<"Enter elements "<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements entered"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    int a;
    cout<<"Enter the position where you want to modify "<<endl;
    cin>>a;

    cout<<"Enter the element "<<endl;
    cin>>item;

    for(int i=a; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[a]=item;

    cout<<"Elements after modification "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}