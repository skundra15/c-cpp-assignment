#include<stdio.h>
int *fun()
{
    static int y=10;
    return &y;

}
int main()
{
    int *p=fun();
    printf("%d",*p);
    return 0;

}