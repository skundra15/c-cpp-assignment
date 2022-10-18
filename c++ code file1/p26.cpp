#include<iostream>

using namespace std;
class abc{
    private:
    int x,y;
    public:
    abc(){}
    abc(int a){
        x=y=a;
    }
    abc(int a, int b){
        x=a;
        y=b;

    }
    void diaplay()
    {
        cout<<"x="<<x<<"and"<<"y="<<y;
    }
};
int main(){
    abc cc1;
    abc cc2(10);
    abc cc3(10,20);
    cc1.diaplay();
    cc2.diaplay();
    cc3.diaplay();
    return 0;
}