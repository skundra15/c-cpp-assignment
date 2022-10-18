#include<stdio.h>
int main(){
    FILE *fp;
    //fp=fopen("t.txt","w+");
    //fp =fopen("C:\\Users\\kundrasu\\Documents\\cc++\\ t.txt","w+");
    fp =fopen("C:\\Users\\kundrasu\\Documents\\cc++\\ t.txt","r+");

    fprintf(fp,"this is the ggggg\n",fp);
    fputs("this is fo pppp..\n",fp);
    fclose(fp);
    return 0;
}