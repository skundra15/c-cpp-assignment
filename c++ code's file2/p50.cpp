#include<iostream>
using namespace std;
class b ;
class  classa{
  public:
    classa():numa(12){}
      private:
     int numa=40;
    friend int add(classa,b);

};
class  b{
     public:
     b():numb(1){}
    
    private:
   int numb=50;
    friend int add(classa,b);
};
int add( classa c,b d){
    return(c.numa+d.numb);
}
 int main(){
    classa c;
    b d;
    cout<<"total="<<add(c,d);
    //cout<<"num"<<num(c);
    return 0;
 }