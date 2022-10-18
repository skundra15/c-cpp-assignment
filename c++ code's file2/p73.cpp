#include <iostream>
using namespace std;
class a{
    public:
    void fun_a(){
        cout<<"in the class a\n";
    }
};
class b{
    public:
    void fun_b(){
        cout<<"in the class b\n";
    }
};
int main(){
b*x=new b();
a*new_a=reinterpret_cast<a*>(x);
new_a->fun_a();
x->fun_b();

return 0;
}


