#include<stdio.h>
int main(){
    int *pc,c;
    c=22;
    printf("address of c%p\n",&c);
    printf("val of c%d\n",c);
    pc=&c;
    printf("address of add%p\n",pc);
    printf("val of add%d\n",*pc);
    c=11;
    printf("address of pc%p\n",pc);
    printf("val of pc%d\n",*pc);
    *pc=2;
      printf("address of c%p\n",&c);
    printf("val of c%d\n",c);
    return 0;



}