#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    char cell10[10];
     for (int i = 0; i < 10; i++) {
         cell10[i] ='0'+ rand() % 10;
       }
      cout << "Ten random digits: ";
      for (int i = 0; i < 10; i++){
          cout<<cell10[i]<<" ";
      }
      char cell14[4];
    for(int i=0;i<4;i++){
         cell14[i] ='0'+ rand() % 10;
    }
    cout<<"\n14 digit cell number is ";
     for (int i = 0; i < 10; i++){
          cout<<cell10[i];
      }
       for (int i = 0; i < 4; i++){
          cout<<cell14[i];
      }
    return 0;
    }