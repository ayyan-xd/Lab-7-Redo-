#include <iostream>
using namespace std;
int main() {
int size;
bool isSymmetric=true;
cout<<"Enter size of square matrix : ";
cin>>size;
cout<<"Enter matrix elements : ";
int arr[size][size];
for(int i=0 ;i<size ; i++){
    for(int j=0 ; j<size ; j++){
        cin>>arr[i][j];
    }
}
cout<<"The matrix is : "<<endl;
for(int i=0; i<size ; i++){
    for(int j=0 ; j<size ;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"The Transpose of Matrix is : "<<endl;
for(int i=0; i<size ; i++){
    for(int j=0 ; j<size ;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}
for(int i=0; i<size ; i++){
    for(int j=0 ; j<size ;j++){
        if(arr[i][j]!=arr[j][i]){
            isSymmetric=false;
        }
    }
}
        if(isSymmetric){
            cout<<"The matrix is Symmetric.";
        }
        if(!isSymmetric){
            cout<<"The matrix is not Symmetric.";
        }
return 0;
}