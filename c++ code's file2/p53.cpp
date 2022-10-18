#include <iostream>
using namespace std;
class A{
    friend class b;
    int a;

};
class b{};
class c:public b{
    void f(A*p){
        //p->A=2;
    }
};
int main(){
   return 0;
   
}