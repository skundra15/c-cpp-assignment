#include<iostream>
using namespace std;
template<class t, class u>
bool are_equal(t a,u b)
{
    return(a==b);
}
int main()
{
    if(are_equal(10,1.0))
    cout<<"x and y are equal\n";
    else
    cout<<"x and y are not equal";
    return 0;
}