#include<stdio.h>
int main()
{
    int age =100;
    if(age<18)
        printf("未成年\n");
    else if(age<28&&age>=18)
        printf("青年\n");
    else if(age<50&&age>=28)
        printf("壮年\n");
    else if(age<90&&age>=50)
        printf("老年\n");
        else
            printf("老不死\n");
}