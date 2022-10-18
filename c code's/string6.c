#include<stdio.h>
#include<string.h>
int main(){
    char h[20];
    printf("enthe the name");
    gets(h);
    printf("strn is  %s",h);
    //printf("\n upper %s",strupr(h));
    printf("\n lower %s",strlwr(h));
    return 0;

}