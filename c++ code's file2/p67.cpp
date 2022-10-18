#include<iostream>
using namespace std;
void exceptionfunction(){
    try{
        throw 0;

    }
    catch(int i){
        cout<<"\nin function :wi"<<i;
        throw;

    }
}
int main(){
    int var =0;
    cout<<"simple c++ prog for rethrowing ";
    try{
        exceptionfunction();

    }
    catch(int ex){
        cout<<"\n main:wrong input"<<ex;

    }
  
    return 0;

}