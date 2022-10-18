#include<stdio.h>
#include<string.h>
int main(){
    char h[20];
    char w[20];
    printf("enter the kuch bhi");
    scanf("%s",&h);
    printf("enter the kuch bhi");
    scanf("%s",&w);
    strcat(h,w);
    puts(h);
    puts(w); 

    return 0;
}

