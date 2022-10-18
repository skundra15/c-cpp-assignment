#include<iostream>
using namespace std;

class b{};

class d:public b{};
void f(b*pb,d*pd){
    d*pd2=static_cast<d*>(pb);
    b*pd2=static_cast<b*>(pb);

}

int main(){
 


}