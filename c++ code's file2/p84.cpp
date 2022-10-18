 #include <iostream>  
 #include<set> 
  using namespace std;
   int main(){
    set<string>string_set{"iphone","android","basic","landline"};
    set<char>chr_set{'a','b','c','d'};
    set<int>int_set{1,2,3,4,5}; 
    for(auto kt=string_set.begin();kt !=string_set.end();++kt)
    cout<<" "<<*kt;
    for(auto kt=chr_set.begin();kt !=chr_set.end();++kt)
    cout<<" "<<*kt;
    for(auto kt=int_set.begin();kt !=int_set.end();++kt)
    cout<<" "<<*kt;
    return 0;

     }