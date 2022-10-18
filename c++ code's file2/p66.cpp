#include<iostream>
using namespace std;
void test(int x){
    try {
        if (x>0)
        throw x;
        else 
        throw 'x';
    }
    catch(int x){
        cout<<"catch a int "<<x;
    }
    catch(char x){
        cout<<"catch a char "<<x;
    }
}
 
 int main(){
    test(-2);
 }