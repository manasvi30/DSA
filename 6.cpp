//merge the array
#include <iostream>
using namespace std;
int main(){
    int arr[10],n,m;
    cout<<"enter the first no of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the second no of elements"<<endl;
    cin>>m;
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }

    cout<<"firt line elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"second line element"<<endl;
    for(int i=0; i<m; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"the array after merging"<<endl;
    int j=0;
    for(int i=n; i<m+n; i++){
        arr[i]=arr[j];
        j++;
    }
    cout<<"The elements are "<<endl;
    for(int i=0;i<m+n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

