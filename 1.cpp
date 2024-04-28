//to find maximum element in an array
#include <iostream>
using namespace std;
int main(){
    int n, i;
    float A[100];

     
    cout<<"Enter number of elements"<<endl;
    cin >>n;
    cout<<"Enter numbers:"<<endl;

    for(i=0; i<n; i++){
        cout<<i+1<<"> ";
        cin>>A[i];
    }

    for (i=0; i<n; i++){
        if(A[0]<A[i])
        A[0]=A[i];
    }

    cout<<"The maximum element is: " <<A[0];
}