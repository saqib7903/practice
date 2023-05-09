#include<iostream>
using namespace std;
int main () {
    int op1 , op2;
    char opr;
    cout<<"enter operands"<<endl;
    cin>>op1>>op2;
    cout<<"enter operator:";
    cin>>opr;
    switch (opr) {
        case '+' : 
        cout<<"result is:"<<endl<<op1+op2;
        break;

        case '-' : 
        cout<<"result is:"<<endl<<op1-op2;
        break;

        case '/' : 
        cout<<"result is:"<<endl<<op1/op2;
        break;
        case '%' :
        cout<<"result is:"<<endl<<op1%op2;
        break;
        default :
        cout<<"INVALID OPERAND!!!";

    }


    return 0;



}
