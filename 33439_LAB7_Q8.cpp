#include<iostream>
using namespace std;
int main(){
    double arr[5][9];
    int total;
    cout<<"Enter total marks for each course : ";
    cin>>total;
    total*=5;
for(int i=0 ; i<5 ; i++){
    cout<<"Enter Student ID : ";
    cin>>arr[i][0];
    cout<<"Enter first course marks : ";
    cin>>arr[i][1];
cout<<"Enter second course marks : ";
    cin>>arr[i][2];
    cout<<"Enter third course marks : ";
    cin>>arr[i][3];
cout<<"Enter fourth course marks : ";
    cin>>arr[i][4];
cout<<"Enter fifth course marks : ";
    cin>>arr[i][5];
    arr[i][6]=total;
arr[i][7]=arr[i][1]+arr[i][2]+arr[i][3]+arr[i][4]+arr[i][5];
arr[i][8]=(arr[i][7]/total)*100;
}
cout<<"Std_ID\tC1\tC2\tC3\tC4\tC5\tTotal\tObt\tPercent"<<endl;
 for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}