#include<stdio.h>
union unionjob{
    char name[20];
    float salary;
    int workerno;
}ujob;

struct structjob
{
    /* data */
    char name [20];
    float salary;
    int workerno;

}sjob;

int main (){
    printf("size of union =%d byts",sizeof(ujob));
    printf("size of union =%d byts",sizeof(sjob));
    return 0;
}
