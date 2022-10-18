#include<iostream>
using namespace std;

    void byvalue_age_in_5_y(int age){
    age +=5;
    std::cout<<"age in 5 y"<<age<<std::endl;
    }
    int main(){
        int age=95;
        byvalue_age_in_5_y(age);
        std::cout<<"current age"<<age;
    }