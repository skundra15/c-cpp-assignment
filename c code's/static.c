#include<stdio.h>
int fun();
int main()
{
 
    printf("%d\n",fun());
    printf("%d \n",fun());
    return 0;

}
int fun(){
    int c=0;
   // static int c=0;
    c++;
    return c;
}