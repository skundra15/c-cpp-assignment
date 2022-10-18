#include<iostream>
using namespace std;
class outside
{
    public:
    class nested
    {
        public:
        static int x;
        static int y;
        int f();
        int g();
    };
};
int outside::nested::x=5;
int outside::nested::f(){
    cout<<"hello1"<<"\n"<<x<<"\n";
    return 0;};

typedef outside::nested outnest;
int outnest::y=10;
int outnest::g(){
    cout<<"hello"<<"\n"<<y;
    return 0;};

int main()
{
    outside::nested d;
    d.f();
    d.g();
    
}