#include<stdio.h>
union unionjob
{char name[20];
float salary; 
int workerNo;
}j;
int main(){
    j.salary=12.3;
    printf("salary=%.1f\n",j.salary);
    j.workerNo=100;
    printf("salary=%.1f\n",j.salary);
    printf("number of the worker =%d",j.workerNo);
    return 0;

}