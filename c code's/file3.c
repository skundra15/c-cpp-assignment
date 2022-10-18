#include<stdio.h>
int main(){
    FILE *fp;
    char buff[255];
    fp=fopen("t.txt","r");
    while (fscanf(fp,"%s",buff)!=EOF)
    {
        /* code */ printf("%s",buff);
    }
    fclose(fp);
    return 0;
}
    