//array deletion
#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    int item;
    cout<<"Enter the no of elements "<<endl;
    cin>>n;
    cout<<"Enter elements "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Elements you entered are "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    int a;
    cout<<"Enter the position in which you want to delete ";
    cin>>a;

    for (int i=a-1; i<=n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"Now the no are "<<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
