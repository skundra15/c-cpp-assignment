//a
//b c
#include<iostream>
using namespace std;
class car{
    public:
    virtual void start ()=0;
     virtual void stop ()=0;
};
class innova:public car{
    public:
    void start()
    {
        cout<<"innova started"<<endl;

    }
    void stop(){
        cout<<"innova stop"<<endl;
    }
};
class swift:public car{
     public:
    void start()
    {
        cout<<"swift started"<<endl;

    }
    void stop(){
        cout<<"swift stop"<<endl;
    }

};
 int main()
 {
    car *c = new innova();
    c->start();
    c->stop();
    c=new swift();
    c->start();
    c->stop();
    return 0;

 }

