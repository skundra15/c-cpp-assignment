#include<iostream>
using namespace std;
typedef unsigned char BYTE;
void f ()
{
    char ch;
    int i =69;
    float f=2.5;
    double dbl;
    ch = static_cast<char>(i);
     dbl = static_cast<double>(f);
      i = static_cast<BYTE>(ch);
        cout<<"\n"<<ch;
     cout<<"\n"<<dbl;
      cout<<"\n"<<i;


}
int main(){
        f();
  

}