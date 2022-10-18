#include<iostream>
using namespace std;
int main(){
    int n;
    
    char str[80];
    cin>>n;
    cin.sync();
    cin.getline(str,80);
    cout<<n<<endl;
    cout<<str<<endl;

    return 0;

}