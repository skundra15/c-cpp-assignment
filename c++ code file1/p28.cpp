#include <iostream>
using namespace std;
class line{
    int size;
    line(){
        size=30;
        cout<<"line s"<<" "<<size<<" "<<m<<endl;
    }
    public:
    static line fun(){
        static line =l;
        if(l == NULL){
            line s;
            l=&s;
        }
        else{
            cout<<"alrady"<<endl;
        }
        return *l;

    }
    void inch(){
        int sizecm=size*100;
        cout<<"in centti"<<sizecm;
    }
};
int main(){
line l = line::fun();
    l.inch();
    l.fun();
    return 0;
}