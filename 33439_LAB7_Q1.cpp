#include<iostream>
 using namespace std;
 int main(){ 
int size, sum=0, p_count=0, nonpos_count=0;
float avg=0.0; 
cout<<"Enter size of Array : ";
 cin>>size; 
 int* arr= new int[size];
 cout<<"Enter array elements : "; 
for(int i=0 ; i<size ; i++){ 
cin>>arr[i];
 }
 for(int i=0 ; i<size ; i++){ 
   if(arr[i]>0){
 }
     } 
for(int i=0 ; i<size ; i++){
   if(arr[i]>0){ 
    sum+=arr[i];
    p_count++; 
    avg=(double)sum/p_count;
    }
   if(arr[i]<=0){ 
    sum+=0; 
    nonpos_count++;
} 
    }
   if(nonpos_count==size){
    sum=0; 
    avg=0;
    }
cout<<"Sum is : "<<sum;
cout<<"\n"<<"Average is : "<<avg;
 delete[] arr;
 return 0;
 }