#include<stdio.h>
#include<string.h>

int main(){
    char *ptr="hello";
    printf("%c\n",(char)*ptr);
    const char C ='a';
    printf("%c",C);
    printf("\n");
    char name[6]="nitin";
    printf("%s",name);
    name[0]='N';
    printf("%s",name);
    printf("%7s",name);
    printf("%.4s",name);
    char arr[20];
    scanf("%9s",arr);
    printf("%s",arr);
    return 0;
    

}