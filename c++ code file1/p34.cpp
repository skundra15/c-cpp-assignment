#include<iostream>
using namespace std;
class base{
    private:
    float bas=100;
    protected:
    float var=200;
    public:
    float sal=2000;
};
class bonus:protected base{
     
     private:
     int ecode=9738;
     protected:
     char dj[20]="1aug";
     public:
     int b=40;
  
    void sum(){
        cout<<"total sal"<<(sal+b+var);
    }
};
class c:public bonus{
   
    public:
    char name[30] ="gauri";
};
int main(){
    bonus a;
   a.sum();
   a.b;
}