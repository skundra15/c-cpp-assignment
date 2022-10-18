#include<stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
void main(){
    //printf("min 10 and 20 is %d\n",min(10,20));
    int a, b;
    scanf("%d",&a,&b);
    printf("value is: %d",min(a,b));
    
}