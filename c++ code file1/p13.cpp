#include<iostream>
#include<conio.h>
using namespace std;

int addi(int a, int b)
{
    return (a*2*b) ;
}

int main(){
    int div;
    div=addi(2,4);
    cout<<"after mul="<<div<<endl;
    return 0;
}