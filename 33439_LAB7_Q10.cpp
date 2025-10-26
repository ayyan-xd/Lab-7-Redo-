
#include<iostream>
using namespace std;
int main(){
    int row=8, col=2;
    double arr[row][col]={{150.6,126.9},{354 , 451.5}, {172.23,75.65}, {73.33,707.17}, {415.15,116.17}, {415.15,116.17}, {415.15,116.17},{415.15,116.17}};
    cout<<"Plot#\tLength\tWidth"<<endl;
    for(int i=0;i<row;i++){
        cout<<i+1<<"\t";
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }                             
    double area[row];
    for(int i=0;i<row;i++){
        area[i]=arr[i][0]*arr[i][1];
        cout<<"Area of plot "<<i+1<<" is: "<<area[i]<<endl;
    }
    double area_max=area[0];
    for(int i=1;i<row;i++){
        if(area[i]>area_max){
        area_max=area[i];
        }
    }
    double max_plot=0;
    for(int i=0;i<row;i++){
        if(area[i]==area_max){
            max_plot=i+1;
        }
    }
    cout<<"Highest area is : "<<area_max<<endl;
    cout<<"Plot with Highest Area : Plot "<<max_plot<<endl;
    return 0;
}
