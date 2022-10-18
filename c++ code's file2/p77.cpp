 #include <iostream>   
using namespace std;
class overload {
    private:
    int a;
    int b;
    public:
    overload():a(0),b(0){}
    void in()
    { cout<<"enter the first no";
        cin>>a;
        cout<<"enter the second no";
        cin>>b;

    }

    void operator-- (){
        a=--a;
        b=--b;
    }
    void out(){
        cout<<"the dec element  of the object "<<a+b;
        //cout<<"\n the mul"<<a*b;

    }
    
    void operator *(){
        a=a;
        b=b;
    }
    void out1(){
        cout<<"\n the mul="<<a*b;

    }
};
int main(){
    overload o;
    o.in();
    --o;
    o.out();
    * o;
    o.out1();

}
