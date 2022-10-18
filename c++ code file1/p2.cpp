#include<iostream>
using namespace std;
namespace first
{
    int x=5;
     int y=10;
}
namespace second{
    double x=3.14;
    double y=2.74;

}
int main(){
    using first::x;
    using second::y;
    cout<<x<<'\n';
    cout<<y<<'\n';
    cout<<first::y<<'\n';
    cout<<second::x<<'\n';
    return 0;
}