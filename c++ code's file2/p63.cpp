#include<iostream>
using namespace std;
typedef class {
int value;
public:
void setdata(int i){
this->value=i;
 }
void printvalues(){
cout<<"value:"<<this->value<<endl;
 }
}myclass;
int main(){
myclass obj1,obj2;
obj1.setdata(20);
obj1.printvalues();
}

