#include<iostream>
#include<conio.h>
using namespace std;
template<class t>
t sum (t a,t b)
{
    t result;
    result=a+b;
    return result;
}
int main(){
    int a=30,b=50;
    double n=20.3,m=20.3;
    cout<<sum<int>(a,b)<<"\n";
        cout<<sum<double>(n,m);
    }
