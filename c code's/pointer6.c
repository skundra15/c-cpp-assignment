#include<stdio.h>
int main(){
    int i=100;
    int *p=&i;
    int *temp;
    temp=p;
    p=p+3;
    return 0;
}