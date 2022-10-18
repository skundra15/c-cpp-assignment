#include<stdio.h>
#include<string.h>
void displaystring(char name[]);

int main(){
    char name[11];
    printf("e the name ");
    fgets(name,sizeof(name),stdin);
    displaystring(name);
    return 0;
}
void displaystring(char name[])
{
    printf("string op:");
puts(name);
}
