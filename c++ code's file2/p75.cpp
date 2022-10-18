#include <iostream>     //dynamic casting 
using namespace std;
class b{
    public:
    virtual void test(){}
};
class d:public b{};
void f(b*pb){
    d*pd1=dynamic_cast<d*>(pb);
     d*pd2=dynamic_cast<d*>(pb);
}
 int main(){
    b*pb;
   d*pd1=dynamic_cast<d*>(pb);
    d*pd2=dynamic_cast<d*>(pb);
     
    return 0;

 }