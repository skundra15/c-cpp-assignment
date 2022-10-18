#include <iostream>
using namespace std;
int  mul(int a,int b){
    cout<<"a*b="<<a*b<<endl;
    return a*b;
}

double mul(double a,double b){
    cout<<"a*b="<<a*b<<endl;
     return a*b;
}

int mul(int a,double b){
    cout<<"a*b="<<a*b<<endl;
     return a*b;
}
int mul(double a,int b){
    cout<<"a*b="<<a*b<<endl;
     return a*b;

}
int main()
{
    cout<<mul(2,3);
    cout<<mul(2.0,3.3);
     cout<<mul(2,3.3);
      cout<<mul(2.4,3);
}