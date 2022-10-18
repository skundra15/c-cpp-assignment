#include<stdio.h>

struct addr

{

    char city[30];

    int pincode;

    char ph [13];

    int id;

};



struct employee

{

    char name[26];

    struct addr add;

};



void display(struct employee);

void main()

{

    struct employee emp;

    printf(" ether the detalis ....\n");

    scanf("%s  %s %d %s %d" ,emp.name,emp.add.city,&emp.add.pincode,emp.add.ph,&emp.add.id);

    display(emp);

}

void display(struct employee emp)

{

    printf("print th details...\n ");

    printf("\nname=%s  city=%s pin=%d ph=%s id=%d\n", emp.name,emp.add.city, emp.add.pincode, emp.add.ph,emp.add.id);

}