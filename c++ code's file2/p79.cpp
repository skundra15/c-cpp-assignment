 #include <iostream>
 #include<vector>  
using namespace std;
int main(){
    vector<int> a;
    for(int i=1;i<=10;i++)
    a.push_back(i*10);
    cout<<"\n ref operator [g]:a[2]="<<a[2];
    cout<<"\nat:a.at(4)="<<a.at(4);
    cout<<"\n front():a.back()"<<a.back();
    int *pos= a.data();
  cout<<"\n pos="<<*pos;
    }