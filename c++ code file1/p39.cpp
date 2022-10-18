////multiple
#include<iostream>
using namespace std;
class car{
    public:
    //pure 
    virtual void start ()=0;
     virtual void stop ()=0;
    virtual void petrol(){                                                                   // viruual==run    without virual ==comp.
        cout<<"petrolllll"<<endl;
     }
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
class swift:public innova{
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
    c=new swift();
    c->start();
     c->petrol();
    car *d = new innova();
    d->stop();
   // c=new swift();
      c->stop();
     
    return 0;

 }