#include<iostream>       //exception handling
using namespace std;
 int main(){
    float var =0;
    cout<<"simple c++";
    try{
        if(var==0){
            throw var;

        }
    }
    catch(float ex){
        cout<<"float excetion catch:value:"<<ex;
    }
    catch(...){
        cout<<"default excetion catch";

    }
 }