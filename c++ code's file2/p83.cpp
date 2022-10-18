 #include <iostream>  
 #include<iterator> 
 #include<list>  
using namespace std;

void showthecontent(list<int>l){
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";

}
int main(){
    list<int> list1,list2;
    int i;
    for(i=0;i<10;i++)
    list1.push_back(i+1);
    for(i=0;i<10;i++)
    list1.push_front(i+1);
    cout<<"content of list 1";
    showthecontent(list1);
    cout<<"content of list 2";
    showthecontent(list2);
    list2.sort();
    cout<<"sorted list 2:";
    showthecontent(list2);
    int time=5;
    while (time--)
    {
        /* code */
        list1.pop_front();

    }
    cout<<"cotent of list 1:";
    showthecontent(list1);
    time =5;
    while(time--){
        list2.pop_back();

    }
    cout<<"content of list2";
    showthecontent(list2);
    cout<<list1.front()<<"is now at the front in list 1\n";
    cout<<list2.back()<<"is now at the front in list 2\n";
    list1.insert(list1.begin(),5,10);
    cout<<"after insertion list 1:";
    showthecontent(list1);
    
    list1.remove(10);
    cout<<"after removal list 1";
    showthecontent(list1);

    cout<<"no the element in list 1";
    cout<<"list.size()"<<"\n";
    list2.reverse();
    cout<<"reversed list2:";
    showthecontent(list2);
    
    list2.erase(list2.begin());
    cout<<"after erase from  list 2"<<endl;
    showthecontent(list2);


    list1.clear();
    if(list1.empty())cout<<"list 1 is now empty\n";
    else cout<<"not empty\n";
    list1.assign(5,2);
    cout<<"list1:";
    showthecontent(list1);
    return 0;
    }