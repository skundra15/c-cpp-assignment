#include<stdio.h>

struct point
{
    /* data */
    int x,y;

};
int main()
{
    struct point arr[10];
    struct point aa;
     
     arr[0].x=100;
     arr[0].y=200;
     aa.x=30;
     aa.y=40;
     printf("%d %d %d %d",arr[0].x,arr[0].y,aa.x,aa.y);
     return 0;
}
