#include <iostream>
#include<string>
using namespace std;
int main() {
string names[5]={"Ali","Zuhair","Faisal","Maaz","Anis"};
cout<<"Original Array is : "<<endl;
for(int i=0;i<5;i++){
    cout<<names[i]<<" ";
}
string insert[5];
string select[5];
for(int i=0 ; i<5 ; i++){
    insert[i]=names[i];
    select[i]=names[i];
}
cout<<endl;
cout<<"\n"<<"---Sorted Array--- "<<endl<<endl;
cout<<"Insertion Sort : "<<endl;
for(int i=1 ; i<5 ; i++){
    string current=insert[i];
    int j=i-1;
    while(insert[j]>current && j>=0){
        insert[j+1]=insert[j];
        j--;
    }
    insert[j+1]=current;
}
for(int i=0 ; i<5 ; i++){
    cout<<insert[i]<<" ";
}
cout<<endl<<endl;
cout<<"Selection Sort :"<<endl;
string temp;
for(int i=0 ; i<4 ; i++){
    for(int j=i+1 ; j<5 ; j++){
        if(select[j]<select[i]){
            temp=select[j];
        select[j]=select[i];
        select[i]=temp;
            }
     }
}
for(int i=0 ; i<5 ; i++){
 cout<<select[i]<<" ";   
}
return 0;
}