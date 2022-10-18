#include<stdio.h>
int addition();
int sub();
int main(){
    int result;
    //int r;
    int(*ptr)();
   ptr=&addition;
  
    result=(*ptr)();
    printf("the sum is\n:%d",result);

     ptr=&sub;
      result=(*ptr)();
    printf("the subb is :%d",result);

}
int addition()
{
    int a,b;
    printf("enter two num");
    scanf("\n%d\n%d",&a,&b);
    return a+b;
}
int sub()
{     int a,b;
    printf("enter two num");
    scanf("%d\n%d",&a,&b);
    return a-b;

}