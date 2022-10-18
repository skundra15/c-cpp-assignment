#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a=3,b=4,c=7;
    if(a+b>10)
    {
        cout<<"ye hai "<<a+b<<"big then 10";

    }
    else if (a+c>10)
    {
        /* code */
         cout<<"ye hai "<<a+c<<"big then 10";

    }
    
    else if(b+c>10)
    {
         cout<<"ye hai "<<b+c<<"big then 10";

    }
    

    else{
        cout<<"nahi hai ";
    }
    return 0;
}
