#include<iostream>
using namespace std;
int main () {
    //enter marks of 5 subjects
    int maths , english , hindi , electrical , electronics, sum ;
    float percentage;
    cin>>maths>>english>>hindi>>electrical>>electronics;
    sum = maths+english+hindi+electrical+electronics;
    cout<<sum<<endl;
    percentage= (sum/5) ;
    cout<<percentage;
    return 0;
    


}
