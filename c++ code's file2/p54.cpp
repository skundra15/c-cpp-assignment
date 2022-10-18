#include <iostream>
using namespace std;
void fun(float){
    cout<<"data type:float\n";

}
void fun(int){
    cout<<"data type:int\n";
}
void fun(double){
    cout<<"data type:double\n";
}
int main(){
    fun(1.0f);
    fun(1.0f);
    fun(1);
      fun(1.0);
    return 0;

}
