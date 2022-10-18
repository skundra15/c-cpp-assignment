#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base class constructor"<<endl;
    }
   virtual ~base()=0;
    
};
base::~base(){
    cout<<"bass class is pure";
}

class derived:public base{
    public:
    derived()
    {
        cout<<"derived class constructor"<<endl;
    }
    ~derived()
    {
        cout<<"derived class destructor"<<endl;
    }
};
int main()
{
    base *p = new derived();
    delete p;
    return 0;
}