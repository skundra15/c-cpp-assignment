#include<iostream>
using namespace std;
class a{
    public:
    class b{};
    b*z;
    class c:public b{
        public:
        b y;
       // a::b y2;
        c*x;
       // a::c*x2;
       void hy(){
        cout<<"hy";
       }
    };
};
int main(){ a::c s;
s.hy();
return 0;

}