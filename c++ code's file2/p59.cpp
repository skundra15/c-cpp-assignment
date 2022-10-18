#include <iostream>
using namespace std;
int x;

void fun(){
class t1{
    public:
    t1(){
        cout<<"test::test1()"<<endl;
    }

};

class t2{
    t1 b;
    public:
    void method()
    {
        cout<<"enter the val "<<endl;
cin>>x;
        cout<<"x="<<x<<endl;

    }
};
t2 c;
c.method();
}
int main(){
    fun();
    return 0;

}
