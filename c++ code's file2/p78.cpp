//vector
 #include <iostream>
 #include<vector>  
using namespace std;
int main(){
    vector<int> a;
    for(int i=1;i<5;i++)
    a.push_back(i);
    cout<<"size:"<<a.size();
    cout<<"\n capacity:="<<a.capacity();
    cout<<"\n max size:="<<a.max_size();
    a.resize(4);
    cout<<"\nsize:="<<a.size();
    if(a.empty()==false)
    cout<<"\n vector is not empty";
    else
    cout<<"\nvector is empty";
    return 0;
    
}