 #include <iostream>   
using namespace std;
class complex{
    public:
    double real;
    double imag;
    public:
    complex(double real=0.,double imag=0.);
    complex operator+(const complex&)const;


};

complex::complex(double r, double i ){
    real= r;
    imag =i;

}
complex complex :: operator+(const complex& c)const{
    complex result;
    result.real=(this->real+c.real);
    result.imag=(this->imag+c.imag);
    return result ;
}

 int main(){
    complex x(4,4);
    complex y(7,8);
    complex z=x+y;
     cout<<z.real;
    cout<<"\n"<<z.imag;
 
   


 }