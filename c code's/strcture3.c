#include<stdio.h>

struct point
{
    /* data */
    int x,y,z;

};
int main()
{
    struct point  p1={.x=10,.y=20,.z=30};
    struct point p2 ={.x=69};
   
    printf("%d %d %d %d ",p1.x,p1.y,p1.z,p2.x);
    
    return 0;
}
    