#include<iostream>
using namespace std;
class test {
    int *p;
    public:
    test(){
        p=new int[10];
        cout<<"test created"<<endl;
    }

    ~test(){
        delete[]p;
        cout<<"test destory"<<endl;

    }
};

void fun(){
    test *t=new test();
    delete t;
}
int main(){
   
   fun();
    return 0;
}