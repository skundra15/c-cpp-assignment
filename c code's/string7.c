#include<stdio.h>
#include<string.h>
int main(){
    char h[20];
    printf("enthe the name");
    gets(h);
    printf("strn is  %s",h);
    printf("\n lower %s",strlwr(h));
    printf("\n REV %s",strrev(h));

    return 0;

}