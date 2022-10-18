//multilevel
#include<iostream>
using namespace std;
class studentinfo{
    public:
    char name[20]="landis";
    int  sec=12;
    
};
class studentfee{
    public:
    double fee=5420.69;
    double df=200.56;
    double f=fee+df;
};
class student:public studentinfo,public studentfee{
    public:
    char add[20]="tower 6";

};
int main(){
    student s;
    cout<<"student name="<<s.name<<"\n";
    cout<<"student fee="<<s.fee<<"\n";
    cout<<"student building fund="<<s.df<<"\n";
    cout<<"student total fee="<<s.f<<"\n";
    cout<<"student address="<<s.add;
    return 0;

}