#include<stdio.h>
int main(){
    FILE *fp ,*fp1;
    char c;
    fp=fopen("t.txt","r");
    if(fp==NULL)
    printf("\nfile doest not exit ");
    while (1)
    {
        /* code */
        c=fgetc(fp);
        if(c==EOF)
        break;
        printf("%c",c);
    }
    fclose(fp);
    }
    