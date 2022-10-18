#include <iostream>
using namespace std;
class bb{
    int a;
    
    public:
    bb(){ }
    void  gh(){
        cout<<"enter the no";
        cin>>a;
    }
    

};
int main(){
    const bb::gh();
    return 0;
}