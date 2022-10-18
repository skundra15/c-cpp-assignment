#include<iostream>
using namespace std;
class di{
    private:
    int meter;
    friend int addi(di);
    public:
    di():meter(0){}
};
int addi(di d)
{
    d.meter+=5;
    return d.meter;

}

int main(){
    di D;
    cout<<"distance"<<addi(D);
    return 0;
    }