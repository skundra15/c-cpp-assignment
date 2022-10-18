//multiple
#include<iostream>
using namespace std;
class base{
    public:
   virtual void display(){
        cout<<"display of base"<<endl;

    }
    void hh(){
        cout<<"heloo baby"<<endl;
    }
};
class derive:public base{
    public:
    void display(){
        cout<<"display of derive"<<endl;
        
    }
    void hh(){
        cout<<"baby hello"<<endl;
    }
};
class derive2:public derive {
    public:
      void display(){
        cout<<"display of derive2"<<endl;
        
    }
};
int main()
{
       base*p1=new derive();
     p1->display();
    derive *p= new derive2();
    p->display();
 

   //base p;
   //p.display();
    //p.hh();
}