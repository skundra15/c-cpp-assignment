#include<iostream>
#include<conio.h>
using namespace std;
int op(int a, int b){
    return(a*b);

}
double op(double a, double b){
    return(a/b);

}
int main(){
    int a=4,b=5;
    cout<<"mul"<<op(a,b);
    double n=12.0,m=12.0;
    cout<<"div"<<op(n,m);
}