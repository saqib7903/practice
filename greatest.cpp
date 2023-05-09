#include<iostream>
using namespace std;
int main () {
    int x , y  , z ;
    cout<<"Enter number:"<<endl;
    cin>>x>>y>>z;
    if (x>y && x>z) {
        cout<<x;
       }
        if (y>x && y>z) {
            cout<<y;
        }
        else {
            cout<<z;
        }
        return 0;
}
