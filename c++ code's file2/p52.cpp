#include <iostream>
using namespace std;
class a{
    public:
    int f(){}
    
};
class b{
    friend int a::f();

};
int main(){
    a x;
}