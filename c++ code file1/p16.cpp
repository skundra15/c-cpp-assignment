#include<iostream>
using namespace std;
int main(){
    int i;
    double d;
    int & r=i;
    double& s=d;
    i=5;
    cout<<"value of i "<<i<<endl;
    cout<<"value of r ref "<<r<<endl;
    d=55.55;
    cout<<"value of i "<<d<<endl;
    cout<<"value of r ref "<<s<<endl;
    return 0;
    

}