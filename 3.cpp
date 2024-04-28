//sum of two matrices
#include <iostream>
using namespace std;

int main(){
    int m,n,A[100][100],B[100][100],Sum[100][100],i,j;

    cout<<"Enter the number of rows "<<endl;
    cin>>m;

    cout<<"Enter the number of columns "<<endl;
    cin>>n;

    cout<<"First matrix: ";

    for (i=0;i<m;i++){
        for (j=0; j<n; j++){
           cin>> A[i][j];
        }
    }

    cout<<"Second matrix: ";

    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
           cin>> B[i][j];
        }
    }

    for (i=0; i<m;i++){
        for(j=0;j<n;j++){
            Sum[i][j]=A[i][j]+B[i][j];
        }
    }

    cout<<"Sum is "<<endl;

    for (i=0; i<m;i++){
        for(j=0;j<n;j++){
            cout<<Sum[i][j]<<"   ";
            if(j == n - 1)
                cout << endl;

        }
    }

}
