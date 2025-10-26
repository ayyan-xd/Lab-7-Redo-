#include <iostream>
using namespace std;

int main() {
    double salesTable[6][4]={0};
    int employeeID, productID;
    double amount;
    cout <<"Enter EmployeeID | ProductID | Amount (Ctrl+D to end):\n";
    while (cin>>employeeID>>productID>>amount) {
        salesTable[productID-1][employeeID-1]+=amount;
    }
    cout<<"Product\tEmp1\tEmp2\tEmp3\tEmp4\tTotal\n";
     double employeeTotals[4]={0}, grandTotal=0;
    for(int product=0; product<6; product++){
        cout<<(product+1)<<"\t";
        double productTotal=0;
        for(int emp=0; emp<4; emp++) {
            cout<<salesTable[product][emp]<<"\t";
            productTotal+=salesTable[product][emp];
            employeeTotals[emp]+=salesTable[product][emp];
        }
        grandTotal+=productTotal;
        cout<<productTotal<<"\n";
    }
    cout<<"Total\t";
    for(int emp = 0; emp<4; emp++) cout<<employeeTotals[emp]<<"\t";
    cout<<grandTotal<<"\n";
    return 0;
}