#include <iostream>
using namespace std;
int x;
int*p;
void f(){
    static int y=10;
    p=&y;
    int x;
    extern int g();
    class local
    {
        public:

    int h(){return y;}
    int k(){return ::x;}
    int l(){return g();}
    };
}
int main(){
    f();
    cout<<*p;
    return 0;
}