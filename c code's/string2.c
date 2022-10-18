#include<stdio.h>
#include<string.h>
int main(){
    char name[11];
    printf("e the name ");
    fgets(name,sizeof(name),stdin);
    printf("name =");
    puts(name);
    return 0;
}

