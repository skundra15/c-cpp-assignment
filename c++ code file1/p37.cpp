//a
//b c
#include<iostream>
using namespace std;
class base{
    public:
   virtual void display(){
        cout<<"display of base"<<endl;

    }
    
};
class derive:public base{
    public:
    void display(){
        cout<<"display of derive"<<endl;
        
    }
    
};
class derive2:public base {
    public:
      void display(){
        cout<<"display of derive2"<<endl;
        
    }
};
int main()
{
       base*p1=new derive();
     p1->display();
    base *p= new derive2();
    p->display();
 

   //base p;
   //p.display();
    //p.hh();
}