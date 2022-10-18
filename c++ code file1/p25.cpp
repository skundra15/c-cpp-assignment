#include<iostream>
#include<conio.h>
using namespace std;
class line{
    public:
    int size;
    int len;
    line(){
        cout<<"enter the size of the line";
        cin>>size;
        cout<<"enter the size of the len";
        cin>>len;
    }
    void display()
    {
        cout<<"line size is "<<size<<" "<<"cm"<<"\n"<<len<<"cm"<<"\n";
        cout<<size*len<<"mul";
    }
};
int main(){
    line l;
    l.display();
    return 0;


}