//pointer swaping
#include<iostream>
using namespace std;
void swap(int *n1 ,int *n2 )
{
   int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
int main(){
int a=69,b=96;
    cout<<"Before swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    swap(&a,&b);
    cout<<"\nAfter swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}