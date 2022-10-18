//single
#include<iostream>
using namespace std;
class base{
    public:
    float sal=2000;
};
class bonus:public base{
     public:
     int b=40;
  
    void sum(){
        cout<<"total sal"<<(sal+b);
    }
};
int main(){
    bonus a;
    a.sum();
}