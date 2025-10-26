#include <iostream>
using namespace std;
int main() {
int size=5;
double std1_sum=0.0, std2_sum=0.0, std1_avg=0.0, std2_avg=0.0, CoVar=0.0;
double std1_marks[size], std2_marks[size];
cout<<"Enter marks of First student : ";
for(int i=0 ; i<size ; i++){
    cin>>std1_marks[i];
}
cout<<"Enter marks of Second student : ";
 for(int i=0 ; i<size ; i++){
     cin>>std2_marks[i];
}
for(int i=0 ; i<size ; i++){
    std1_sum+=std1_marks[i];
}
for(int i=0 ; i<size ; i++){
    std2_sum+=std2_marks[i];
}
std1_avg=std1_sum/size; 
std2_avg=std2_sum/size;
double XY=0.0;
for(int i=0 ; i<size; i++){
    XY+=(std1_marks[i]-std1_avg)*(std2_marks[i]-std2_avg);
}
CoVar=(XY)/(size-1);
cout<<"CoVariance is : "<<CoVar;
cout<<"\n"<<"Interpretation : ";
if(CoVar>0){
    cout<<"The two students have a positive linear relationship between their marks."<<endl<<"When one student scores high, the other is likely to score high too.";
}
else if(CoVar<0){
cout<<"The two students have a negative linear relationship between their marks."<<endl<<"When one student scores high, the other is likely to score low.";
    }
    else{
        cout<<"The students have no linear relationship bwtween their marks."<<endl<<"High scoring of one student shows no consistent increase or decrease.";
    }
return 0;
}