//multiple
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
class hra: public bonus{
    public:
    float h=200.56;
    void gt(){
        cout<<"after cut hra="<<((sal+b)-h);
    }
};
int main(){
    hra r;
    r.gt();
    return 0;
}
