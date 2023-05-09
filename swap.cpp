#include <iostream> 
using namespace std;
int main () {
    int x , y , z;
    cin>>x>>y;
    z=x;
    x=y;
    y=z;
    cout<<x<<endl<<y;
    return 0;
}
