#include <iostream>
using namespace std;
int main() {
int m,n,T=0;
cout<<"Enter number of rows and columns : ";
cin>>m>>n;
int arr[m][n];
cout<<"Enter Array elements : ";
for(int i =0 ; i<m ; i++){
    for(int j=0 ; j<n ; j++){
        cin>>arr[i][j];
    }
}
for(int i =0 ; i<m ; i++){
    for(int j=0 ; j<n ; j++){
        if(arr[i][j]==0){
            T++;
        }
    }
}
if(T>=(m*n)/2){
    cout<<"Matrix is Sparse. ";
}
else{
    cout<<"Matrix is not sparse.";
}
return 0;
}