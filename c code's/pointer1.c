#include<stdio.h>
int main(){
   int a=100;
    int *p=&a;
     //int *p=NULL;
    printf("%p\n",p);
    printf("%d",*p);
    //printf("%x\n",p);
}