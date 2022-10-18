#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a[10];     //{1,2,3,4,5,6};
    int b[10];  //{6,5,4,3,2,1};
    int c[10];
    int size;
    cout<<"enter the size of array";
    cin>>size;

    cout<<"pls the  array ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
     cout<<"pls the second array ";
    for(int i=0;i<size;i++){
        cin>>b[i];}

    for(int i=0;i<size;i++){
        c[i]=a[i]*b[i];
        cout<<"mul="<<c[i]<<endl;
        c[i]=a[i]+b[i];
          cout<<"add="<<c[i]<<endl;
          c[i]=a[i]-b[i];
          cout<<"sub="<<c[i]<<endl;
    
    }

    //for(int i=0;i<6;i++){
        //c[i]=a[i]+b[i];
        //cout<<"add="<<c[i]<<endl;}
    //for(int i=0;i<6;i++){
       // c[i]=a[i]-b[i];
        //cout<<"sub="<<c[i]<<endl;}


    return 0;

}